#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_wepGen_clicked()
{
    subNum = (rand() % 4);
    updatewType();
    updatewName();
    updatewDmg();
    updatewClass();
    updateDescrip();

}
void MainWindow::updatewType()
{
    wType = wepType[subNum];
    ui->wTypeLabel->setText(wType);
    showPix();
}
void MainWindow::updatewName()
{
    wName = wepName[subNum];
    ui->wNameLabel->setText(wName);
}
void MainWindow::updatewDmg()
{
    wDmg = wepDmg[subNum];
    ui->wDmgLabel->setText(wDmg);
}
void MainWindow::updatewClass()
{
   wClass = wepClass[subNum];
   ui->wClassLabel->setText(wClass);
}
void MainWindow::updateDescrip()
{
    wDescrip = wepDescrip[subNum];
    ui->wDescripLabel->setText(wDescrip);
}
void MainWindow::showPix()
{

    QPixmap macePix("C:/Users/zach/Desktop/projpics/wowmace.png");
    QPixmap staffPix("C:/Users/zach/Desktop/projpics/wowstaff.png");
    QPixmap swordPix("C:/Users/zach/Desktop/projpics/wowsword.png");
    QPixmap daggPix("C:/Users/zach/Desktop/projpics/wowdagg.png");

    if(wType == "Mace")
        ui->picLabel->setPixmap(macePix);

    else if(wType == "Staff")
        ui->picLabel->setPixmap(staffPix);

    else if(wType == "2Hand Sword")
        ui->picLabel->setPixmap(swordPix);
    else if(wType == "Dagger/Offhand")
        ui->picLabel->setPixmap(daggPix);
    else
        ui->picLabel->setText("No Picture Provided!");
}
