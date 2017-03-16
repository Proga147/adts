#include "StackL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;
int num_elements=1;


int Stack::size( ) {
return data.size();
}
void Stack::push(int ch){
data.insert(ch,num_elements);
num_elements++;
}

void Stack::pop( ) {
int top=data.size();
data.remove(top);
}

int Stack::top(  ) {

return }


void Stack::clear( ){}

