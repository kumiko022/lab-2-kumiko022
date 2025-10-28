#include <iostream>
using namespace std;

int main() {
    int d1, d2, d3;

    cout << "Ingrese el primer dígito: ";
    cin >> d1;
    cout << "Ingrese el segundo dígito: ";
    cin >> d2;
    cout << "Ingrese el tercer dígito: ";
    cin >> d3;

    int numero = d1 * 100 + d2 * 10 + d3;

    cout << "El número combinado es: " << numero << endl;

    return 0;
}
