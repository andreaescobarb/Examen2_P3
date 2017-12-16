#include "ArrayStack.h"
#include <iostream>
using namespace std;

ArrayStack::ArrayStack(int pSize){

	size = pSize;
	array= new string[size];
	availPos=0;

}



bool ArrayStack::push(string dato){

	bool retVal=false;

	if(availPos==size){

		return retVal;

	}else{
		array[availPos++]=dato;
		retVal= true;
		return retVal;

	}

}// fin push


bool ArrayStack::isEmpty(){
	return availPos==0;
}

string ArrayStack::pop(){
	string retVal;
	if(isEmpty()){
		return 0;

	}else{
		retVal = array[availPos-1];
		availPos--;
		return retVal;

	}


}// fin metodo pop


ArrayStack::~ArrayStack(){
	delete[] array;
}
