#include "mainwindow.h"
#include "ui_mainwindow.h"


int ms = 0;
int timerOff;
bool f = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    time = new QTimer();
    ui->progressBar->setValue(0);
    popUp = new PopUp();
}

MainWindow::~MainWindow(){
    delete ui;
    delete time;
    delete popUp;
}

void MainWindow::shutdown(){
    system("shutdown -s -t 0");
}

void MainWindow::update_label(){
    timerOff++;

    if(ms/1000-timerOff==60){
        popUp->setPopupText("The PC will shut down after 1 min.");
        popUp->show();
    }

    if(ms/1000-timerOff==300){
        popUp->setPopupText("The PC will shut down after 5 min.");
        popUp->show();
    }

    ui->progressBar->setValue(timerOff);
    ui->last_time->setText(QString::number(timerOff) + " : " +QString::number(ms/1000));
}

void MainWindow::timer(){
    time->setInterval(ms);
    time->setSingleShot(1);
    connect(time, SIGNAL(timeout()), this, SLOT(shutdown()));
    time->start();
}
void MainWindow::slot_shutdown()
{
    if(StopTimer){
        delete timerSec;
    }

    ui->progressBar->setValue(0);
    timerSec = new QTimer();

    timerOff = 0;
    ms = (ui->hBox->text().toInt() * 3600 + ui->mBox->text().toInt() * 60) * 1000;

    popUp->setPopupText("The PC will shut down after " + QString::number(ms/1000) + "sec.");
    popUp->show();

    ui->last_time->setText(QString::number(timerOff) + " : " + QString::number(ms/1000));
    connect(timerSec, SIGNAL(timeout()), this, SLOT(update_label()));
    ui->progressBar->setMaximum(ms/1000);

    timerSec->start(1000);
    timer();
    StopTimer = 1;
}
void MainWindow::on_shutdown_clicked(){
    Dialog *dialog;
    dialog = new Dialog();
    dialog->setWindowTitle("SHUTDOWN TIMER");
    dialog->show();
    connect(dialog, SIGNAL(s_yes_clicked()), this, SLOT(slot_shutdown()));
}

void MainWindow::on_stop_clicked(){
    if(StopTimer){
        ui->progressBar->setValue(0);
        time->stop();
        timerSec->stop();
        ui->last_time->setText("");
    }
}


