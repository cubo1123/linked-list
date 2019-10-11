#include "LinkedList.h"

LinkedList::LinkedList(){
    this->length = 0;
    this->first = nullptr;
    this->last = nullptr;
}

LinkedList::~LinkedList(){
}

void LinkedList::add(string data,int id){
    Node* node = new Node();
    node->setName(data);
    node->setId(id);
    node->setNext(nullptr);
    if(this->first == nullptr){
        this->first = node;
    }else{
        this->last->setNext(node);
    }
    this->last = node;
    this->length++;
}

Node* LinkedList::search(int id){
    cout<<"\t\t\tSEARCH"<<endl;
    Node* head = this->first;
    while(head){
        if(head->getId()==id){
            cout << head->getName() << endl;
            cout << "my position: " << head << " apunto a: " << head->getNext()<<endl;
            return head;
        }
        head = head->getNext();
    }
    cout<<"ese elemento no existe en la lista"<<endl;
    return nullptr;
}


bool LinkedList::modify(string replace,int id){
    cout<<"\t\t\tMODIFY"<<endl;
    Node* head = this->first;
    while(head){
        if(head->getId()==id){
            cout << "data antes de: " << head->getName() << endl;
            cout << "my position: " << head << " apunto a: " << head->getNext()<<endl;
            head->setName(replace);
            cout << "data despues de: " << head->getName() << endl;
            return true;
        }
        head = head->getNext();
    }
    cout<<"ese elemento no existe en la lista"<<endl;
    return false;
}

void LinkedList::deleteNode(int id){
            cout<<"\t\t\t DELETE"<<endl;
            Node* temp = this->first;
            Node *prev;
            while(temp->getNext() != NULL && temp->getId() != id){
                prev = temp;
                temp = temp->getNext();
            }
            if(temp->getId() == id){
                cout << "data antes de: " << temp->getName() << endl;
                cout << "my position: " << temp << " apunto a: " << temp->getNext()<<endl;
                prev->setNext(temp->getNext());
                delete temp;
            }else if(temp->getNext() == NULL){
                cout << "Ese nodo no existe!" << endl;
            }
}


void LinkedList::print(){
    cout<<"\t\t\t PRINT"<<endl;
    Node* head = this->first;
    while(head){
        cout << head->getName() << endl;
        cout << "my position: " << head << " apunto a: " << head->getNext()<<"Y mi id es:" << head->getId() << endl;
        head = head->getNext();
    }
}
