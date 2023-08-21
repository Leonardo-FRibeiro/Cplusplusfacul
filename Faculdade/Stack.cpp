//push(inserir)
//pop(remove)
#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
    top = 0;
}


void Stack::Push(int x)
{
    if(Full()){
        cout << "Pilha cheia" << endl;
        abort();
        return;
    } else{
        top++;
        Entry[top] = x;
    }
}