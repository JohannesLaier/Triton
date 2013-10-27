#include "Parser.h"

Parser::Parser() {
    node = NULL;
}

char Parser::get() {
    char c = codePtr[0];
    codePtr++;
    return c;
}

char Parser::look() {
    return codePtr[0];
}

std::string Parser::getTagName() {
    std::string name = "";
    char c;
    while ((c = get()) != '>') {
        name += c;
    }
    return name;
}

void Parser::parse(const std::string& htmlCode) {
    char* code = new char[htmlCode.size()];
    codePtr = code;

    memcpy(code, htmlCode.c_str(), htmlCode.size());

    while (codePtr < code + htmlCode.size()) {
        char c = get();
        if (c == '<' && look() != '/') {
            Node* n = new Node(node);
            n->setName(getTagName());

            if (node != NULL) {
                node->appendChild(n);
                node = n;
            }
        } else if (c == '<') {
            if (node->parrent != NULL) {
                node = node->parrent;
            }
        }
    }

    delete[] code;
}
