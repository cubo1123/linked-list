#include <iostream>
#include <cstdlib>

#include<Linkedlist.h>

using namespace std;

int main(int argc, char const *argv[])
{
    LinkedList list;
    int opc;
    char name[30];
    int id;
    do{
        cout<<"\t 1.- Agregar"<<endl;
        cout<<"\t 2.- Eliminar"<<endl;
        cout<<"\t 3.- Modificar"<<endl;
        cout<<"\t 4.- Mostrar"<<endl;
        cout<<"\t 5.- Buscar"<<endl;
        cout<<"\t -1.- Salir"<<endl;
        cin>>opc;
        if(opc==1){
            cout<<"Ingrese el nombre"<<endl;
            cin>>name;
            cout<<"Ingrese el id"<<endl;
            cin>>id;
            list.add(name,id);
        }else if(opc == 2){
            cout<<"Ingrese el id"<<endl;
            cin>>id;
            list.deleteNode(id);
        }else if(opc == 3){
            cout<<"Ingrese el id"<<endl;
            cin>>id;
            cout<<"Ingrese el nuevo nombre"<<endl;
            cin>>name;
            list.modify(name,id);
        }else if(opc == 4){
            list.print();
        }else if(opc == 5){
            cout<<"Ingrese el id"<<endl;
            cin>>id;
            list.search(id);
        }

    }while(opc != -1);

    return 0;
}
