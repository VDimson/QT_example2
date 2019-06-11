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

private slots:
    void on_checkBox_clicked();

    void on_pushButton_released();

    void on_pushButton_destroyed();

    void on_pushButton_pressed();

    void on_pushButton_clicked();

    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
