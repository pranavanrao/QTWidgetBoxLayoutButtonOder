#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget  w;

    QPushButton b1("Button1");
    QPushButton b2("Button2");
    QPushButton b3("Button3");
    QPushButton b4("Button4");

    QPushButton b11("Button1");
    QPushButton b12("Button2");
    QPushButton b13("Button3");
    QPushButton b14("Button4");

    QHBoxLayout *hLayout = new QHBoxLayout;
    QVBoxLayout *vLayout = new QVBoxLayout;

    hLayout -> addWidget(&b1);
    hLayout -> addWidget(&b2);
    hLayout -> addWidget(&b3);
    hLayout -> addWidget(&b4);

    vLayout -> addWidget(&b11);
    vLayout -> addWidget(&b12);
    vLayout -> addWidget(&b13);
    vLayout -> addWidget(&b14);

    QVBoxLayout *vMainLayout = new QVBoxLayout;

    vMainLayout -> addLayout(hLayout);
    vMainLayout -> addLayout(vLayout);

    w.setLayout(vMainLayout);
    w.show();

    return a.exec();
}
