#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QPixmap>
#include <QMovie>
#include <popup.h>.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void timer();


    QTimer *time;
    QTimer *timer_sec;
    PopUp *popUp;
private slots:
    void on_shutdown_clicked();
    void shutdown();
    void update_label();
    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
