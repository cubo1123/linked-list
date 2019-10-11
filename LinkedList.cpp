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

Node* LinkedList::search(int id){
    cout<<"\t\t\tSEARCH"<<endl;
    Node* head = this->first;
    while(head){
        if(head->id==id){
            cout << head->name << endl;
            cout << "my position: " << head << " apunto a: " << head->next<<endl;
            return head;
        }
        head = head->next;
    }
    cout<<"ese elemento no existe en la lista"<<endl;
    return nullptr;
}

