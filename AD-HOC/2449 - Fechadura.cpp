#include <iostream>

using namespace std;

int main() {

    int N, M, total = 0;
    int *vetor;

    cin >> N >> M;

    vetor = new int[N];
    
    for(int i = 0; i < N; i++)
        cin >> vetor[i];

    for(int i = 0; i < N - 1; i++) {
        if(vetor[i] < M) {
            vetor[i + 1] += (M - vetor[i]);
            total += (M - vetor[i]);
        } else if(vetor[i] > M) {
            vetor[i + 1] -= (vetor[i] - M);
            total += (vetor[i] - M);
        }
    }

    cout << total << endl;

    delete[] vetor;

    return 0;
}