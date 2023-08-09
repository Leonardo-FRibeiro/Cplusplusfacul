#include <iostream>
#include <string>
using namespace std;

int persistencia(unsigned int num) {
    if (num < 10) {
        return 0;
    }

    int persistencia_count = 0;
    while (num >= 10) {
        int produto = 1;
        num = produto;
        persistencia_count++;
    }

    return persistencia_count;
}

int main() {
    cout << persistencia(39) << endl;  
    cout << persistencia(999) << endl; 
    cout << persistencia(4) << endl;   
    return 0;
}
