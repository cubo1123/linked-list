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


bool LinkedList::modify(string replace,int id){
    cout<<"\t\t\tMODIFY"<<endl;
    Node* head = this->first;
    while(head){
        if(head->id==id){
            cout << "data antes de: " << head->name << endl;
            cout << "my position: " << head << " apunto a: " << head->next<<endl;
            head->name = replace;
            cout << "data despues de: " << head->name << endl;
            return true;
        }
        head = head->next;
    }
    cout<<"ese elemento no existe en la lista"<<endl;
    return false;
}

void LinkedList::deleteNode(int id){
            cout<<"\t\t\t DELETE"<<endl;
            Node* temp = this->first;
            Node *prev;
            while(temp->next != NULL && temp->id != id){
                prev = temp;
                temp = temp->next;
            }
            if(temp->id == id){
                cout << "data antes de: " << temp->name << endl;
                cout << "my position: " << temp << " apunto a: " << temp->next<<endl;
                prev->next = temp->next;
                delete temp;
            }else if(temp->next == NULL){
                cout << "Ese nodo no existe!" << endl;
            }
}


void LinkedList::print(){
    cout<<"\t\t\t PRINT"<<endl;
    Node* head = this->first;
    while(head){
        cout << head->name << endl;
        cout << "my position: " << head << " apunto a: " << head->next<<"Y mi id es:" << head->id << endl;
        head = head->next;
    }
}
