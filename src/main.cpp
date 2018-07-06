#include "html/Parser.h"
#include "dom/Node.h"

int main(int argc, char *argv[]) {

    Parser p;
    p.parse("<h1><p></p></h1>");

    return 0;
}
