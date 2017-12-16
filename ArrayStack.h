#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class ArrayStack{
  private:
    string* array;
    int size;
    int availPos;


  public:
    ArrayStack(int);
    bool push(string);
    string pop();
    bool isEmpty();
    ~ArrayStack();

};
#endif
