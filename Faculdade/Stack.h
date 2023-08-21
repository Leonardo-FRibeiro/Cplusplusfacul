#define STACK_H
const int MAXStack = 100;
class Stack
{
    private:
    int top;  //topo da pilha
    int Entry[MAXStack+1]; //vetor

    public:
    Stack();
    void Push(int x);
    void Pop(int &x);
    void Full(int x);
};