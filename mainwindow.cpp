#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    new_user = new image2();
}

MainWindow::~MainWindow()
{
    delete ui;
}

   void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Choose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif)"));

    if (QString::compare(filename,QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);


        if(valid)
        {
            ui->lbl_image->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            //Error handling

        }

    }

}


void MainWindow::on_another_img_clicked()
{
    new_user->show();
}
