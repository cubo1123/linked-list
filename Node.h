#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;
class Node
{
public:
    string getName() const;
    void setName(const string &value);
    int getId() const;
    void setId(int value);
    Node *getNext() const;
    void setNext(Node *value);

private:
    string name;
    Node* next;
    int id;
};
#endif
