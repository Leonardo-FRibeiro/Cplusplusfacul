#include "pilha.h"
#include "carta.h"


Stack::Stack(){ //Ação que indica o valor inicial da Pilha
    top = 0;
}

void Stack::Push(){ //Ação que verifica se a pilha não esta cheia ou se possui um lixo de momoria
    if(Full()){
        cout << "Pilha cheia" << endl;
        abort();
        return;
    }else{
        top++;
        Entry[];
    }

}

void Carta::Inicializar(int val, string naip){
    
}



Stack_Saida::Stack_Saida(){
    top_saida = 0;
}