#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<Node.h>


class LinkedList{
public:
    LinkedList();
    ~LinkedList();
    void add(string name,int id);
    Node* search(int id);
    bool modify(string replace,int id);
    void deleteNode(int id);
    void print();
private:
    int length;
    Node* first;
    Node* last;
};

#endif
