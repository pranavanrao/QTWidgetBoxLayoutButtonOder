#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPushButton b1("Button1");
    QPushButton b2("Button2");
    QPushButton b3("Button3");
    QPushButton b4("Button4");

    // QWidget widget;
    QHBoxLayout *hLayout = new QHBoxLayout;

    hLayout -> addWidget(&b1);
    hLayout -> addWidget(&b2);
    hLayout -> addWidget(&b3);
    hLayout -> addWidget(&b4);

    w.setLayout(hLayout);
    w.show();

    return a.exec();
}
