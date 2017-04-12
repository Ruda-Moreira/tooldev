#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("AI Tool OF3ver.0.01");

    w.show();



    return a.exec();
}
