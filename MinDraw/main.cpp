#include "mindraw.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MinDraw w;
    w.show();
    return a.exec();
}
