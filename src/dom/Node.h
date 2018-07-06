#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>

enum NodeType {
    Document,
    DocumentFragmet,
    DocumentType,
    ProcessingInstrcution,
    EntityReference,
    Element,
    Attr,
    Text,
    CDATASection,
    Comment,
    Entity,
    Notation
};

class Node {
    private:
        NodeType type;
        std::string nodeName;
        std::string nodeValue;

        std::vector<Node*> childNodes;
        std::vector<Node*> attributes;
    public:
        Node* parrent;

        Node(Node* parrent);
        ~Node();

        void setName(const std::string& name);
        void setValue(const std::string& value);
        void appendChild(Node* node);
};

#endif // NODE_H
