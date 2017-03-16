#include "StackLL.h"
#include <iostream>
using namespace std;

class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   int num_elements;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)

Stack::~Stack (  ) {
 
}


int Stack::size( ) {
 return num_elements;
}
void Stack::push(int ch){
Node* newPtr= new Node{ch};
newPtr->data=ch;
newPtr->link=frontPtr;
frontPtr=newPtr;
num_elements++;
}

void Stack::pop( ) {
Node* NPtr=frontPtr;
frontPtr=frontPtr->link;
num_elements--;
delete NPtr;
}

int Stack::top(  ){

return frontPtr->data;}

void Stack::clear( ){

}
