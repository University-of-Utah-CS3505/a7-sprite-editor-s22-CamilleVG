#include "model.h"
Model::Model(QObject *parent):
    QObject(parent)
{
    currFrameIndex = 0;
    playerIndex = 0;
}

void Model::AddFrame(QImage img) {
    if (frames.size() == 0) {
        frames.push_back(img);
    }
    else if (frames.size() == currFrameIndex + 1) {
        frames.push_back(img);
    } else {
        frames.insert(frames.begin() + currFrameIndex + 1, img);
    }

    // Don't want to increment frame index when adding the very first frame
    if(frames.size() != 1){
        currFrameIndex++;
    }

    emit UpdateLayout(frames, currFrameIndex);
}

void Model::UpdateFrame(QImage img) {
    frames.at(currFrameIndex) = img;
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::NextFrameSlot(){
    if(frames.size() - 1 > currFrameIndex){
        currFrameIndex++;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::PreviousFrameSlot(){
    if(0 < currFrameIndex){
        currFrameIndex--;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::GetFrames(){
    // Updated this method as it didnt work with deleteing frames.
    // If the for loop was on a frame that was deleted the program would crash.
    // This way it will never crash as it will always be in a valid state.
    if (playerIndex >= frames.size()) {
        playerIndex = 0;
    }

    QTimer::singleShot(1000/fps, this, &Model::GetFrames);
    emit SendFrames(frames[playerIndex]);

    playerIndex++;
}

void Model::UpdateFPS(int _fps) {
    qDebug() << _fps;
    fps = _fps;
}

void Model::RemoveFrameSlot() {
    if (currFrameIndex == 0 && frames.size() == 1) {
        frames.at(currFrameIndex).fill(Qt::transparent);
    } else {
        frames.erase(frames.begin()+currFrameIndex);
        if (currFrameIndex != 0){
            currFrameIndex--;
        }
    }

    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::SaveFile(QString filename, int size) {
    // Checks for valid filename
    if (!filename.isEmpty()) {
        QJsonDocument saveDoc;
        QJsonObject saveObject;
        // Saves initial data into file. Because QJsonObject is unordered, the save file output will order the fields randomly
        saveObject["height"] = size;
        saveObject["width"] = size;
        int numFrames = frames.size();
        saveObject["numberOfFrames"] = numFrames;

        QJsonObject saveFrames;
        // Iterates through each frame
        for (int frameIndex = 0; frameIndex < numFrames; frameIndex++) {
            QJsonArray frame;
            // Iterates through each row in each frame
            for (int rowIndex = 0; rowIndex < frames[frameIndex].height(); rowIndex++) {
                QJsonArray row;
                // Iterates through each pixel in each row in each frame
                for (int pixelIndex = 0; pixelIndex < frames[frameIndex].width(); pixelIndex++) {
                    QJsonArray pixelArray;
                    // Creates an rgba array for each pixel
                    QColor color = frames[frameIndex].pixel(pixelIndex, rowIndex);
                    pixelArray.push_back(color.red());
                    pixelArray.push_back(color.green());
                    pixelArray.push_back(color.blue());
                    pixelArray.push_back(color.alpha());
                    row.push_back(pixelArray);
                }
                frame.push_back(row);
            }
            std::string frameName = "frame" + std::to_string(frameIndex);
            saveFrames.insert(QString::fromStdString(frameName), frame);
        }
        saveObject["frame"] = saveFrames;
        saveDoc.setObject(saveObject);
        QByteArray jsonData = saveDoc.toJson();
        QFile output(filename);
        // Checks if the file can be written to
        if (output.open(QIODevice::WriteOnly)) {
            output.write(jsonData);
            output.close();
        }
    }
}

void Model::OpenFile(QString filename) {
    std::vector<QImage> newFrames;
    QJsonArray loadFrames;
    // Checks for valid filename
    if (!filename.isEmpty()) {
        QJsonDocument loadDoc;
        QJsonObject loadObject;
        QByteArray jsonData;
        QFile loadFile(filename);
        // Checks if file can be read
        if (loadFile.open(QIODevice::ReadOnly)) {
            jsonData = loadFile.readAll();
            loadDoc = loadDoc.fromJson(jsonData);
            loadObject = loadDoc.object();
            // Resizes the draw screen
            int size = loadObject["height"].toInt();
            emit SetDimensions(size);
            QJsonObject loadFrames = loadObject["frame"].toObject();
            // Iterates throughe each frame
            for (int frameIndex = 0; frameIndex < loadFrames.size(); frameIndex++) {
                QString frameName = "frame" + QString::number(frameIndex);
                QJsonArray newFrameRows = loadFrames[frameName].toArray();
                QImage newFrame(newFrameRows.size(), newFrameRows.size(), QImage::Format_ARGB32);
                // Iterates through each row of each frame
                for (int rowIndex = 0; rowIndex < newFrameRows.size(); rowIndex++) {
                    QJsonArray newFramePixels = newFrameRows.at(rowIndex).toArray();
                    // Iterates through each pixel for every row
                    for (int pixelIndex = 0; pixelIndex < newFramePixels.size(); pixelIndex++) {
                        QColor newColor;
                        newColor.setRed(newFramePixels.at(pixelIndex).toArray().at(0).toInt());
                        newColor.setGreen(newFramePixels.at(pixelIndex).toArray().at(1).toInt());
                        newColor.setBlue(newFramePixels.at(pixelIndex).toArray().at(2).toInt());
                        newColor.setAlpha(newFramePixels.at(pixelIndex).toArray().at(3).toInt());
                        // Checks for transparent background
                        if (newColor != qRgba(200, 200, 200, 0)){
                            newFrame.setPixelColor(pixelIndex, rowIndex, newColor);
                        }
                    }
                }
                // Adds the new frame to the vector
                newFrames.push_back(newFrame);
            }
            // Replaces the old frames with the imported ones
            this->frames = newFrames;
            currFrameIndex = 0;
            UpdateFrame(frames.at(0));
            emit SetImageSignal(frames.at(0));
        }
    }
}
