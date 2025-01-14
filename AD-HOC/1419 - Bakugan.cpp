#include <iostream>

using namespace std;

int main() {

    int R, *M, *L;

    while(cin >> R) {
        if(R == 0)
            break;

        M = new int[R];
        L = new int[R];

        for(int i = 0; i < R; i++)
            cin >> M[i];
        for(int i = 0; i < R; i++)
            cin >> L[i];

        int pontos_M = M[0], pontos_L = L[0];
        int atual_M = M[0], qtd_M = 1;
        int atual_L = L[0], qtd_L = 1;
        bool tres = false;
        for(int i = 1; i < R; i++) {
            pontos_M += M[i];
            pontos_L += L[i];

            if(M[i] == atual_M)
                qtd_M++;
            else {
                atual_M = M[i];
                qtd_M = 1;
            }

            if(L[i] == atual_L)
                qtd_L++;
            else {
                atual_L = L[i];
                qtd_L = 1;
            }

            if(qtd_L == 3 || qtd_M == 3) {
                if(qtd_M != 3 && !tres)
                    pontos_L += 30;
                if(qtd_L != 3 && !tres)
                    pontos_M += 30;
                tres = true;
            }

        }

        if(pontos_L > pontos_M)
            cout << 'L' << endl;
        else if(pontos_L < pontos_M)
            cout << 'M' << endl;
        else
            cout << 'T' << endl;

        delete[] M;
        delete[] L;
    }

    return 0;
}