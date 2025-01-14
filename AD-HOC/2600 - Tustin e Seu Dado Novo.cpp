#include <iostream>

using namespace std;

int main() {
    
    int N, L1, L3;
    int dado[6], L2[4];
    bool valido;

    cin >> N;
    for(int i = 0; i < N; i++) {
        valido = true;
        for(int i = 0; i < 6; i++)
            dado[i] = 0;

        cin >> L1;
        if(L1 > 0 && L1 < 7)
            dado[L1 - 1]++;
        else
            valido = false;

        for(int i = 0; i < 4; i++) {
            cin >> L2[i];
        if(L2[i] > 0 && L2[i] < 7)
            dado[L2[i] - 1]++;
        else
            valido = false;
        }

        cin >> L3;
        if(L3 > 0 && L3 < 7)
            dado[L3 - 1]++;
        else
            valido = false;

        if(L1 + L3 != 7)
            valido = false;
        else if(L2[0] + L2[2] != 7 || L2[1] + L2[3] != 7)
            valido = false;

        for(int i = 0; i < 6; i++) {
            if(dado[i] != 1) {
                valido = false;
                break;
            }
        }

        cout << (valido? "SIM": "NAO") << '\n';

    }


    return 0;
}