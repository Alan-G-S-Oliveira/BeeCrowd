#include <iostream>

using namespace std;

int main() {

    int N, X1, X2, cont = 1;
    string par, impar;

    while(true) {
        cin >> N;
        cin.ignore();

        if(N == 0)
            break;

        cin >> par;
        cin >> impar;
        cin.ignore();

        cout << "Teste " << cont << endl;
        for(int i = 0; i < N; i++) {
            cin >> X1 >> X2;
            cin.ignore();
            if((X1 + X2) % 2 == 0)
                cout << par << endl;
            else
                cout << impar << endl;
        }
        cout << endl;
        cont++;
    }

    return 0;
}