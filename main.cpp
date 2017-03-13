#include "smarttetris.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartTetris w;
    w.show();
    return a.exec();
}
