#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double A, D, R;
    while(cin >> A >> D >> R) {

    
        double aux = (R - 90) * M_PI / 180;
        double resultado = (sin(aux) * D / cos(aux)) + A;

        cout << fixed;
        cout.precision(4);
        
        cout << resultado << endl;

    }
    return 0;
}