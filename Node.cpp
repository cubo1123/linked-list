#include "Node.h"

string Node::getName() const{
    return name;
}

void Node::setName(const string &value){
    name = value;
}

int Node::getId() const{
    return id;
}

void Node::setId(int value){
    id = value;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}
