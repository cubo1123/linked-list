#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;
class Node
{
public:
    Node* next;
    string getName() const;
    void setName(const string &value);
    int getId() const;
    void setId(int value);
private:
    string name;
    int id;
};
#endif
