#include "image2.h"
#include "ui_image2.h"
#include <QFileDialog>



image2::image2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::image2)
{
    ui->setupUi(this);
}

image2::~image2()
{
    delete ui;
}


void image2::on_btn_image2_clicked()
{

    QString filename = QFileDialog::getOpenFileName(this,tr("Choose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif)"));

        if (QString::compare(filename,QString()) !=0)
        {
            QImage image;
            bool valid =image.load(filename);

            if(valid)
            {
                ui->lbl_image_2->setPixmap(QPixmap::fromImage(image));
            }

            else
            {
                //Error handling
            }

        }

}
