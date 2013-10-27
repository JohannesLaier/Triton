#include <QtGui/QApplication>
#include "Triton.h"
#include "html/Parser.h"

int main(int argc, char *argv[]) {
    Parser p;
    p.parse("<h1><p></p></h1>");

    QApplication a(argc, argv);
    Triton w;
    w.show();
    
    return a.exec();
}
