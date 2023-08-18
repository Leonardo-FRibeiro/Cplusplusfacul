#include "Sacola.h"
#include <iostream>
using namespace std;
//implementação dos metodos
//Construtor
//Defusor
Bag::Bag()
{
    Used = 0;
}

void Bag::Insert(int num)
{
    if(Full()){
        cout << "Estrutura cheia!";
        abort();
    }
    Used++;
    Data[Used]=num;
}
int Bag::Occurence()
{
}
void Bag::Remove()
{
    
}
bool Bag::Full()
{
     if(Used==CAPACITY){
        return true;
     }else{
        return false;
     }
     
}

