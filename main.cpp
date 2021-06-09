#include <iostream>
#include<time.h>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"


using namespace std;
 
int main(){
	
	LinkedList a;
	//a.insert(28);
	a.insertInicio(4);
	a.insertInicio(2);
	a.insertInicio(7);
	a.insertInicio(9);
	a.insertInicio(6);
	a.insertInicio(13);
	a.remove(4);
	a.removeFinal();
	a.remove(7);
	//a.eliminarInicio();
	a.insertInicio(8);
	cout <<"Size: "<<a;
	a.print();
	
    return 0;
}

