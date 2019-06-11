#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/rec/img/paper.png"),"Audi");
    ui->listWidget->addItem(item_1);
    ui->listWidget->addItem("BMW");
    ui->listWidget->addItem("Ford");
    ui->listWidget->addItem("Volvo");
    ui->listWidget->addItem("UAZ");
    ui->listWidget->addItem("Kia");
    ui->listWidget->addItem("Hyindai");
    ui->listWidget->addItem("Wolz");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->checkState())
    {
        ui->statusBar->showMessage("Элемент выбран!");
    }
    else
    {
        ui->statusBar->showMessage("Элемент не выбран!");
    }
}


void MainWindow::on_pushButton_released()
{
    ui->statusBar->showMessage("отпущена");
}

void MainWindow::on_pushButton_destroyed()
{
    ui->statusBar->showMessage("Сработал сигнал destroyed!");
}

void MainWindow::on_pushButton_pressed()
{
      ui->statusBar->showMessage("нажата");
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked())
    {
        ui->statusBar->showMessage("Выбран первый");
    }
    if (ui->radioButton_2->isChecked())
    {
        ui->statusBar->showMessage("Выбран второй");
    }

}

void MainWindow::on_action_triggered()
{
    ui->statusBar->showMessage("Создан новый проект");
}

void MainWindow::on_action_3_triggered()
{
    ui->statusBar->showMessage("Открытите проекта");
}

void MainWindow::on_action_4_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->statusBar->showMessage(ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::blue);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
