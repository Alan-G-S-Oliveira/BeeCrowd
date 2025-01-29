#include <iostream>

using namespace std;

int main() {

    int N, M;
    int *vetor, soma;

    while(cin >> N >> M) {

        vetor = new int[N];
        for(int i = 0; i < N; i++)
            cin >> vetor[i];

        soma = 0;
        for(int i = 0; i < M; i++)
            soma += vetor[N - i - 1];

        cout << soma << endl;

        delete[] vetor;
    }

    return 0;
}