#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Ingresa un número entero." << endl;
    cin >> num;

    if (num % 2 == 0 ) {
        cout << num << " es número par." << endl;
    }
    else{
        cout << num << " no es número par." << endl;
    }
    return 0;
}