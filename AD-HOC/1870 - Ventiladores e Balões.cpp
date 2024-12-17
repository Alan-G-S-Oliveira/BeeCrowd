#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int L, C, P;
    string linha, aux;

    while(true) {
        cin >> L >> C >> P;
        cin.ignore();
        if(L == C && C == P && P == 0)
            break;

        int **matriz = new int*[L];
        for(int i = 0; i < L; i++)
            matriz[i] = new int[C];

        for(int i = 0; i < L; i++) {
            getline(cin, linha);
            istringstream ss(linha);
            int j = 0;
            while(ss >> aux) {
                matriz[i][j] = stoi(aux);
                j++;
            }
        }

        P--;
        bool estorou = false;
        for(int i = 0; i < L; i++) {
            int esq = P - 1, dir = P + 1;
            while(matriz[i][esq] == 0 || matriz[i][dir] == 0) {
                if(matriz[i][esq] == 0)
                    esq--;
                if(matriz[i][dir] == 0)
                    dir++;
            }
            P += (matriz[i][esq] - matriz[i][dir]);
            if(P <= esq) {
                cout << "BOOM " << i + 1 << " " << esq + 1 << endl;
                estorou = true;
                break;
            }
            if(P >= dir) {
                cout << "BOOM " << i + 1 << " " << dir + 1 << endl;
                estorou = true;
                break;
            }
        }

        if(!estorou)
            cout << "OUT " << P + 1 << endl;

        for(int i = 0; i < L; i++)
            delete[] matriz[i];
        delete[] matriz;

    }

    return 0;
}