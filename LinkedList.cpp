#include "LinkedList.h"

LinkedList::LinkedList(){
    this->length = 0;
    this->first = nullptr;
    this->last = nullptr;
}

void LinkedList::add(string data,int id){
    Node* node = new Node();
    node->name = data;
    node->id = id;
    node->next = nullptr;
    if(this->first == nullptr){
        this->first = node;
    }else{
        this->last->next = node;
    }
    this->last = node;
    this->length++;
}
