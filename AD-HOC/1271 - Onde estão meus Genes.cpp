#include <iostream>

using namespace std;

inline void trocar(int *vetor, int ini, int fim) {
    int meio = (fim - ini + 1) / 2;

    for(int i = 0; i < meio; i++) {
        int aux = vetor[ini + i];
        vetor[ini + i] = vetor[fim - i];
        vetor[fim - i] = aux;
    }

}

int main() {

    int N, R, I, J, Q, X, cont = 1;
    int *genoma;

    while(cin >> N && N != 0) {
        cin >> R;

        genoma = new int[N];
        for(int i = 0; i < N; i++)
            genoma[i] = i + 1;

        for(int i = 0; i < R; i++) {
            cin >> I >> J;
            trocar(genoma, I - 1, J - 1);
        }

        cin >> Q;

        cout << "Genome " << cont << endl;
        for(int i = 0; i < Q; i++) {
            cin >> X;
            for(int i = 0; i < N; i++) {
                if(genoma[i] == X) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }

        cont++;
        delete[] genoma;

    }

    return 0;
}