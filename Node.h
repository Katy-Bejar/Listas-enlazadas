#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node{
	private:
		int elem;
		Node *next; //un nodo que va a apuntar al siguiente 
		
	public:
		//constructor
		Node(int, Node*);	
		
		//set
		void setElem(int);
		void setNext(Node*);
		
		//get
		int getElem();
		Node* getNext(); //va a regresar un apuntador nodo
		
		//destructor
		~Node();
		
		//sobregarga del operador de salida
		friend std::ostream& operator<<(std::ostream &output, const Node &D ){ 
            output <<D.elem;
            return output;            
        }
        
        //friend class LinkedList;
};

//constructor
Node::Node(int elem, Node* next){
	this->elem = elem;
	this->next = next;
}

void Node::setElem(int _elem){
	elem = _elem;
}

void Node::setNext(Node* _next){
	next = _next;
}

int Node::getElem(){
	return elem;
}

Node* Node::getNext(){
	return next;
}

Node::~Node(){
}

#endif
