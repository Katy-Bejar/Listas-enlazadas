#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <stdlib.h>
 
#include "Node.h"

class LinkedList{
	private:
		int size;
		Node *head;
		
	public:
		//constructor
		LinkedList();
		
		//get		
		int getSize();
		Node* getHead();
		
		//set
		void setSize(int);
		void setHead(Node *head);
		
		void insertInicio(int);
		void insert(int);
		void removeInicio();
		void removeFinal();
		void remove(int);
		void print();		
									

		//Nodo Buscar(int);

		//destructor
		~LinkedList();
		
		friend std::ostream& operator<<(std::ostream &output, const LinkedList &D );
};

#endif


