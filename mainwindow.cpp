<<<<<<< HEAD
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

void MainWindow::on_btn_exit_clicked()
{
    emit mysignal();
    this->close();
}
void MainWindow::closeEvent(QCloseEvent *event){
    emit mysignal();
}
=======
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

void MainWindow::on_btn_exit_clicked()
{
    emit mysignal();
    this->close();
}
void MainWindow::closeEvent(QCloseEvent *event){
    emit mysignal();
}
>>>>>>> e47426f... 20200813测试GIT仓库
