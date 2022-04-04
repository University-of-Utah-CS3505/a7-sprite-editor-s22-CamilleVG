#ifndef REALSIZE_H
#define REALSIZE_H

#include <QWidget>

namespace Ui {
class RealSize;
}

class RealSize : public QWidget
{
    Q_OBJECT

public:
    explicit RealSize(QWidget *parent = nullptr);
    ~RealSize();

private:
    Ui::RealSize *ui;

public slots:
    void UpdateRealPlayBackSlot(QImage frame, int size);
};

#endif // REALSIZE_H
