#include <iostream>

using namespace std;

int main() {

    int N, I, F;
    int *vetor;

    cin >> N >> I >> F;
    cin.ignore();

    vetor = new int[N];

    for(int i = 0; i < N; i++)
        cin >> vetor[i];

    int qtd = 0;
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            int aux = vetor[i] + vetor[j];
            if(aux >= I && aux <= F)
                qtd++;
        }
    }

    cout << qtd << endl;

    delete[] vetor;

    return 0;
}