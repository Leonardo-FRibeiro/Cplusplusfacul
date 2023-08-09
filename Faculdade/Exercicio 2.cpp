#include <iostream>
#include <string>
using namespace std;
void swap(void* &left, void* &right)
{
    void* temp;
    temp = (int*) left;
    left = (int*) right;
    right = temp;

};
int main()
{
    void* left = new int[0];
    void* right = new int[0];
    cout << left << endl;
    cout << right << endl;
    swap(left, right);
    cout << left;
    cout << right;

}