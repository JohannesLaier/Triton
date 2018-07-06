#include "Node.h"

Node::Node(Node* p) {
    parrent = p;
}

Node::~Node() {
    for (std::vector<Node*>::iterator iter = childNodes.begin(); iter != childNodes.end(); iter++) {
        delete *iter;
    }
}

void Node::setName(const std::string& name) {
    nodeName = name;
}

void Node::setValue(const std::string& value) {
    nodeValue = value;
}

void Node::appendChild(Node* node) {
    childNodes.push_back(node);
}
