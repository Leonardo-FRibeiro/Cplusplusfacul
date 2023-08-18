#define SACOLA_H
#include <set>
const int CAPACITY = 20;
class Bag
{
    public: //declara os metodos
    Bag();
    void Insert(int num);
    int Occurence();
    void Remove();
    bool Full();
    private:
    int Data[CAPACITY+1];
    int Used;

};

