#include <iostream>

using namespace std;

int main() {

    int T, At, Ad, Bt, Bd, H;

    cin >> T;

    while(T--) {

        cin >> At >> Ad >> Bt >> Bd;
        cin >> H;

        char vencedor;
        int Ac = 0, Bc = 0;
        while(H > 0) {
            if(Ac <= Bc) {
                Bc -= Ac;
                Ac = Ad;
                H -= At;
                vencedor = 'A';
            } else {
                Ac -= Bc;
                Bc = Bd;
                H -= Bt;
                vencedor = 'B';
            }
        }
        cout << (vencedor == 'A'? "Andre": "Beto") << endl;
    }

    return 0;
}