#include <iostream>

using namespace std;

int main() {

    int N, M;
    int *trilha;
    int total, indice;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> M;
        trilha = new int[M];
        for(int j = 0; j < M; j++) 
            cin >> trilha[j];

        int soma1 = 0;
        int soma2 = 0;
        for(int j = 1; j < M; j++) {
            soma1 += trilha[j] - trilha[j - 1];
            soma2 += trilha[M - (j + 1)] - trilha[M - j];
        }

        cout << soma1 << ' ' << soma2 << endl;

        if(i == 0) {
            indice = 1;
            total = min(soma1, soma2);
        } else {
            if(min(soma1, soma2) < total) {
                indice = i + 1;
                total = min(soma1, soma2);
            }
        }

        delete[] trilha;
    }

    cout << indice << endl;

    return 0;
}