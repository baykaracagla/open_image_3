#ifndef IMAGE2_H
#define IMAGE2_H

#include <QWidget>
#include<QFileDialog>

namespace Ui {
class image2;
}

class image2 : public QWidget
{
    Q_OBJECT

public:
    explicit image2(QWidget *parent = 0);
    ~image2();

private slots:
    void on_btn_image2_clicked();

private:
    Ui::image2 *ui;
};

#endif // IMAGE2_H
