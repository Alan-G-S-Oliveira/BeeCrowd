#include <iostream>

using namespace std;

int main() {

    int R, A, B;
    int cont = 1;

    while(cin >> R) {
        if(R == 0)
            break;

        int aldo = 0, beto = 0;

        for(int i = 0; i < R; i++) {
            cin >> A >> B;
            cin.ignore();

            aldo += A;
            beto += B;
        }

        cout << "Teste " << cont << endl;
        cout << (aldo > beto? "Aldo": "Beto") << "\n" << endl;
        cont++;
    }    

    return 0;
}