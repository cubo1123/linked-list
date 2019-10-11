#include "Node.h"

Node::Node(){

}

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
