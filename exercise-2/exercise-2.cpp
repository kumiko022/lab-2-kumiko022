#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese dos enteros: ";
    cin >> num1 >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0)
            cout << num1 << " es un múltiplo de " << num2 << endl;
        else
            cout << num1 << " no es un múltiplo de " << num2 << endl;
    } else {
        cout << "Error: no se puede dividir entre cero." << endl;
    }

    return 0;
}
