#include "table.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Table w;
    w.show();

    return a.exec();
}
