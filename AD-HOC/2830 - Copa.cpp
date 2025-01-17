#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int K, L;
    int cont = 0;

    cin >> K;
    cin >> L;

    while(K != L) {
        K = ceil(K / 2.0);
        L = ceil(L / 2.0);

        cont++;
    }

    switch(cont) {
        case 1:
            cout << "oitavas" << endl;
            break;
        case 2:
            cout << "quartas" << endl;
            break;
        case 3:
            cout << "semifinal" << endl;
            break;
        default:
            cout << "final" << endl;
            break;
    }

    return 0;
}