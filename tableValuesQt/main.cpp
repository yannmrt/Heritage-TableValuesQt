#include "tableValuesQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tableValuesQt w;
    w.show();
    return a.exec();
}
