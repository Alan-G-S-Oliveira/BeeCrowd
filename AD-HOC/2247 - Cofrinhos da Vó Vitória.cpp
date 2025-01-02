#include <iostream>

using namespace std;

int main() {

    int N;
    int cont = 1;

    while(cin >> N) {
        if(N == 0)
            break;

        int aux1, aux2;
        int J = 0, Z = 0;

        cout << "Teste " << cont << endl;
        for(int i = 0; i < N; i++) {
            cin >> aux1 >> aux2;
            cin.ignore();

            J += aux1;
            Z += aux2;
            cout << J - Z << endl;
        }
        cout << endl;
        cont++;
    }

    return 0;
}