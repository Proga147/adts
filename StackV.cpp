#include "StackV.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;



int Stack::size(){
return data.size( );}

void Stack::push(int ch){
data.push_back(ch);

}

void Stack::pop(){
data.pop_back();
}

int Stack::top() {
return data.back();}

void Stack::clear( ){
}
