#include <iostream>

using namespace std;

inline int busca(int *vetor, int n, int x) {
    int ini = 0;
    int meio;

    while(ini < n) {
        meio = ini + (n - ini) / 2;
        if(vetor[meio] == x)
            return meio;
        else if(vetor[meio] > x)
            n = meio;
        else
            ini = meio + 1;
    }
    if(vetor[ini] == x)
        return ini;
    return -1;
}

int main() {

    int N, M, aux, total = 0;
    int *vetor_1, *vetor_2;

    cin >> N >> M;
    vetor_1 = new int[N];
    vetor_2 = new int[M];

    for(int i = 0; i < N; i++)
        cin >> vetor_1[i];
    for(int i = 0; i < M; i++) {
        cin >> aux;
        vetor_2[i] = busca(vetor_1, N, aux);
    }

    total = vetor_2[0];
    for(int i = 1; i < M; i++)
        total += abs(vetor_2[i] - vetor_2[i - 1]);
    cout << total << endl;

    return 0;
}