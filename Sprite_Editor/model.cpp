#include "model.h"
Model::Model(QObject *parent):
    QObject(parent)
{
    currFrameIndex = 0;
    playerIndex = 0;
}

/**
 * @brief Functionality to add a frame.
 * @param Image that is added to frames array.
 */
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

/**
 * @brief Updates the current frame.
 * @param What the current frame is updated to.
 */
void Model::UpdateFrame(QImage img) {
    frames.at(currFrameIndex) = img;
    emit UpdateLayout(frames, currFrameIndex);
}

/**
 * @brief Moves to the next frame.
 */
void Model::NextFrameSlot(){
    if(frames.size() - 1 > currFrameIndex){
        currFrameIndex++;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

/**
 * @brief Moves to the previous frame.
 */
void Model::PreviousFrameSlot(){
    if(0 < currFrameIndex){
        currFrameIndex--;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

/**
 * @brief Updates the current frame in mainwindow.
 */
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

/**
 * @brief Updates the frames per second.
 * @param New fps value.
 */
void Model::UpdateFPS(int _fps) {
    fps = _fps;
}

/**
 * @brief Removes the selected frame.
 */
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

/**
 * @brief Saves the current sprite editor file.
 * @param Filename.
 * @param Size of dimensions.
 */
void Model::SaveFile(QString filename, int size) {
    if (!filename.isEmpty()) {
        QJsonDocument saveDoc;
        QJsonObject saveObject;
        saveObject["height"] = size;
        saveObject["width"] = size;
        int numFrames = frames.size();
        saveObject["numberOfFrames"] = numFrames;

        QJsonObject saveFrames;
        for (int frameIndex = 0; frameIndex < numFrames; frameIndex++) {
            QJsonArray frame;
            for (int rowIndex = 0; rowIndex < frames[frameIndex].height(); rowIndex++) {
                QJsonArray row;
                for (int pixelIndex = 0; pixelIndex < frames[frameIndex].width(); pixelIndex++) {
                    QJsonArray pixelArray;
                    QColor color = frames[frameIndex].pixelColor(pixelIndex, rowIndex);
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
        if (output.open(QIODevice::WriteOnly)) {
            output.write(jsonData);
            output.close();
        }
    }
}

/**
 * @brief Opens a file.
 * @param Filename to be opened.
 */
void Model::OpenFile(QString filename) {
    std::vector<QImage> newFrames;
    QJsonArray loadFrames;
    if (!filename.isEmpty()) {
        QJsonDocument loadDoc;
        QJsonObject loadObject;
        QByteArray jsonData;
        QFile loadFile(filename);
        if (loadFile.open(QIODevice::ReadOnly)) {
            jsonData = loadFile.readAll();
            loadDoc = loadDoc.fromJson(jsonData);
            loadObject = loadDoc.object();
            int size = loadObject["height"].toInt();
            emit SetDimensions(size);

            QJsonObject loadFrames = loadObject["frame"].toObject();
            for (int frameIndex = 0; frameIndex < loadFrames.size(); frameIndex++) {
                QString frameName = "frame" + QString::number(frameIndex);
                QJsonArray newFrameRows = loadFrames[frameName].toArray();
                QImage newFrame(newFrameRows.size(), newFrameRows.size(), QImage::Format_ARGB32);
                for (int rowIndex = 0; rowIndex < newFrameRows.size(); rowIndex++) {
                    QJsonArray newFrameCols = newFrameRows.at(rowIndex).toArray();
                    for (int colIndex = 0; colIndex < newFrameCols.size(); colIndex++) {
                        QColor newColor;
                        newColor.setRed(newFrameCols.at(colIndex).toArray().at(0).toInt());
                        newColor.setGreen(newFrameCols.at(colIndex).toArray().at(1).toInt());
                        newColor.setBlue(newFrameCols.at(colIndex).toArray().at(2).toInt());
                        newColor.setAlpha(newFrameCols.at(colIndex).toArray().at(3).toInt());
                        if (newColor != qRgba(200, 200, 200, 0)){
                            newFrame.setPixelColor(colIndex, rowIndex, newColor);
                        }
                    }
                }
                newFrames.push_back(newFrame);
            }
            this->frames = newFrames;
            currFrameIndex = 0;
            UpdateFrame(frames.at(0));
            emit SetImageSignal(frames.at(0));
        }
    }


}
