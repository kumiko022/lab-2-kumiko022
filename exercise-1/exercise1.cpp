#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;

    cout << "Ingresa el primer número entero: " << endl;
    cin >> num1;
    cout << "Ingresa el segundo número entero: " << endl;
    cin >> num2;
    cout << "Ingresa el tercer número entero: " << endl;
    cin >> num3;

    int suma = num1 + num2 + num3;
    double promedio = suma / 3.0;
    int producto = num1 * num2 * num3;

    int menor = num1;
    int mayor = num1;

    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    cout << "\nLa suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El más pequeño es " << menor << endl;
    cout << "El más grande es " << mayor << endl;

    return 0;
}