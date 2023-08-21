#include "carta.cpp"
const int MAXSTACK = 26;
class Stack{
    public:
    Stack();
    void Push();
    void Pop();
    void Full();
    private:
    int top;
    int Entry[MAXSTACK+1];
};


class Stack_Saida{
    public:
    
    Stack_Saida();
    void Push_Saida();
    void Pop_Saida();
    void Full_Saida();

    private:
    int top_saida;
};