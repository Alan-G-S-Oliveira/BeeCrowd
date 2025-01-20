#include <iostream>

using namespace std;

int main() {

    int **matriz;
    int L, C, M, N;

    cin >> L >> C >> M >> N;
    matriz = new int*[L];
    for(int i = 0; i < L; i++) {
        matriz[i] = new int[C];
        for(int j = 0; j < C; j++)
            cin >> matriz[i][j];
    }

    int maior = 0, soma;
    for(int i = 0; i < L; i += M) {
        for(int j = 0; j < C; j += N) {
            soma = 0;
            for(int k = 0; k < M && (i + k) < L; k++) {
                for(int l = 0; l < N && (j + l) < C; l++)
                    soma += matriz[i + k][j + l];
            }
            if(soma > maior)
                maior = soma;
        }
    }

    cout << maior << endl;

    for(int i = 0; i < L; i++)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}