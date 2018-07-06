#ifndef PARSER_H
#define PARSER_H

#include <string>

#include "../dom/Node.h"

class Parser {
    private:
        char* codePtr;

        char get();
        char look();

        std::string getTagName();

        Node* node;
    public:
        Parser();
        void parse(const std::string& htmlCode);
};

#endif // PARSER_H
