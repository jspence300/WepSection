#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString wepType[4] = {"Mace", "Staff", "2Hand Sword", "Dagger/Offhand"};
    QString wepName[4] = {"DoomSeeker", "Staff of Royalty", "Sword of Capablity", "Dagger of Thieves"};
    QString wepDmg[4] = {"180 Strength", "200 Intellect", "250 Strength", "180 Intellect"};
    QString wepClass[4] = {"Paladin", "Druid", "Warrior", "Warlock"};
    QString wepDescrip[4] = {"\"Beholder of Doom\"", "\"Only the noble\"", "\"Only the strong\"", "\"Honor among Thieves\""};

    void updatewType();
    void updatewName();
    void updatewDmg();
    void updatewClass();
    void updateDescrip();
    void showPix();

    int subNum;

    QString wType;
    QString wName;
    QString wDmg;
    QString wClass;
    QString wDescrip;





private slots:



    void on_wepGen_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
