#include <iostream>

using namespace std;

int main() {

    int N;
    int **quadrado;
    bool valido = true;
    int soma1, soma2, soma3;

    cin >> N;
    quadrado = new int*[N];
    for(int i = 0; i < N; i++)
        quadrado[i] = new int[N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cin >> quadrado[i][j];
    }

    soma1 = 0;
    for(int i = 0; i < N; i++) {
        soma2 = soma3 = 0;
        for(int j = 0; j < N; j++) {
            soma2 += quadrado[i][j];
            soma3 += quadrado[j][i];
        }
        if(i == 0) {
            if(soma2 != soma3) {
                valido = false;
                break;
            }
            soma1 = soma2;
        } else {
            if(soma1 != soma2 || soma1 != soma3) {
                valido = false;
                break;
            }
        }
    }

    if(valido) {
        soma2 = soma3 = 0;
        for(int i = 0; i < N; i++) {
            soma2 += quadrado[i][i];
            soma3 += quadrado[i][N - i - 1];
        }
    }

    valido = (soma1 == soma2 && soma2 == soma3);
    cout << (valido? soma1: -1) << endl;

    for(int i = 0; i < N; i++)
        delete[] quadrado[i];
    delete[] quadrado;

    return 0;
}