#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int menor, mayor, medio;

    cout << "Ingrese tres números diferentes: ";
    cin >> a >> b >> c;

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;


    if (a != menor && a != mayor)
        medio = a;
    else if (b != menor && b != mayor)
        medio = b;
    else
        medio = c;

    cout << "El número de en medio es: " << medio << endl;

    return 0;
}
