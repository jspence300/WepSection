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
