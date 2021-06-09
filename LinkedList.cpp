#include "LinkedList.h"
#include "Node.h"
#include<iostream>
using namespace std;

// sobrecarga del operador de salida
ostream& operator<<(ostream &output, const LinkedList &D ){ 
	output << D.size<<endl;
    return output;            
}
      
LinkedList::LinkedList(){
	head = NULL;
	size = 0;
}

//getter
int LinkedList::getSize(){
	return size;
}

Node* LinkedList::getHead(){
	return head;
}

//setter
void LinkedList::setHead(Node* _head){
	head = _head;
}

void LinkedList::setSize(int _size){
	size = _size;
}

//agregar al inicio de la lista
void LinkedList::insertInicio(int valor){
	//cuando se agrega el nuevo nodo va a apuntar al nodo q apunta head
    Node* nuevo = new Node (valor,this->head);
    this->head = nuevo;//apuntamos head al nuevo nodo
    this->size++; //se aumentara el tamaño de la lista
}

//eliminar al inicio de la lista
void LinkedList::removeInicio(){
	//creamos un apuntador current que apuntara al mismo nodo al que apunta head
    Node* current = this->head ;
    this->head = this->head->getNext();//head avanza al nodo siguiente del q apunta
    current->setNext(NULL);//el nodo al que apunta current va a dirigir a NULL
    delete current;//se eliminara current
    this->size--;//se disminuye el tamaño de la lista
}

//eliminar al final de la lista
void LinkedList::removeFinal(){
    if(this->head){
    	//creamos un apuntador current que apuntara al mismo nodo al que apunta head
        Node*current = this->head;   
        Node*prev = NULL;
        
        //recorre la lista enlazada
        while(current->getNext()){
        	//prev apuntara a la misma direccion q ya apunta current
            prev = current;
            //prev ira un nodo antes de current
            current = current->getNext();
        }
        //si solo tiene un nodo la lista
        if(current == this->head){
            this->head = this->head->getNext();//head apunta al siguiente nodo
            delete current; //se elimina current
            this->size--;//disminuye el tamaño
        }else{
            prev->setNext(NULL);//prev se dirigira a NULL
            delete current;//se elimina current porque apunta al ultimo nodo
            this->size--;//disminuye el tamaño
        }
    }
}

void LinkedList::remove(int valor){
    if(this->head){
    	//creamos un apuntador current que apuntara al mismo nodo al que apunta head
        Node* current = this->head;
        Node* prev;
        while(current){
        	//si el elemento se encuentra al inicio de la lista enlazada
            if(current->getElem() == valor && this->head == current){
                LinkedList::removeInicio();
                break;
            }
            //si el elemento se encuentra al final de la lista enlazada
            else if(current->getElem() == valor && current->getNext() == NULL){
                LinkedList::removeFinal();
                break;
            }
            else if(current->getElem() == valor && current->getNext() != NULL){
            	//el siguiente del apuntador prev sera igual al siguiente del apuntador current
                prev->setNext(current->getNext());
                current->setNext(NULL);//current se igualara a NULL
                delete current;//se elimina current
                this->size--;
            }
            else{
                prev = current;
                current = current->getNext();
            }
        }
    }
}
//----------------------------------------------------------------//
///print
void LinkedList::print(){
    Node* current = this->head;
    while(current){
        cout << current->getElem() <<" ";
        current = current->getNext();
    }
    cout << endl;
}
//----------------------------------------------------------------//



//destructot
LinkedList::~LinkedList(){
}


