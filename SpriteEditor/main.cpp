/// This is the main method of our program.
/// It is simply the default the QtCreator gives us, with a model member variable added.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model m;
    MainWindow w(m);
    w.show();
    return a.exec();
}
