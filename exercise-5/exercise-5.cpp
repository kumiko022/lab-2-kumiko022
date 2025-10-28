#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    cout << "***********" << endl;
    cout << "x  f(x)" << endl;
    cout << "***********" << endl;

    for (int x = 0; x <= 5; x++) {
        int fx = (x * x * x) - (x * x) + 5; 
        cout << x << "  " << fx << endl;
    }

    cout << "***********" << endl;

    return 0;
}
