#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PushButton_clicked()
{
    ui->label->setText("Button is clicked");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                              "My Title",
                                                              "This is my custom question",
                                                              QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
        QApplication::quit();
    else
        qDebug() << "No was clicked";
}
