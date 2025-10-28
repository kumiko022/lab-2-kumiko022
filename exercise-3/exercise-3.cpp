#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Introduzca un número entero de cinco dígitos: ";
    cin >> numero;

    int d1 = numero / 10000;          
    int d2 = (numero / 1000) % 10;    
    int d3 = (numero / 100) % 10;     
    int d4 = (numero / 10) % 10;      
    int d5 = numero % 10;             

    cout << "Dígitos separados: "
         << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    return 0;
}
