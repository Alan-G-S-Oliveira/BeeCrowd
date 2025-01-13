#include <iostream>

using namespace std;

int main() {

    int P, N, C;
    int **matriz;
    int palitos;

    while(cin >> P >> N >> C) {
        if(P == N && N == C && C == 0)
            break;

        matriz = new int*[N];
        for(int i = 0; i < N; i++)
            matriz[i] = new int[P];

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < P; j++)
                cin >> matriz[i][j];
        }

        palitos = 0;
        for(int j = 0; j < P; j++) {
            int cont = 0;
            for(int i = 0; i < N; i++) {
                if(matriz[i][j] == 1)
                    cont++;
                else {
                    if(cont >= C)
                        palitos++;
                    cont = 0;
                }
            }
            if(cont >= C)
                palitos++;
        }

        cout << palitos << endl;

        for(int i = 0; i < N; i++)
            delete[] matriz[i];
        delete[] matriz;
    }

    return 0;
}