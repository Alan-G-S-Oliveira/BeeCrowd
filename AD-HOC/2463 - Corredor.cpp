#include <iostream>
#include <climits>
#include <tuple>

using namespace std;

tuple<int, int, int> max_cross_subarray(int *vetor, int ini, int fim) {
    int meio = ini + (fim - ini) / 2;
    int soma = 0, soma_esq = INT_MIN;
    int pos1 = meio, pos2 = meio + 1;

    for(int i = meio; i >= ini; i--) {
        soma += vetor[i];
        if(soma > soma_esq) {
            pos1 = i;
            soma_esq = soma;
        }
    }

    soma = 0;
    int soma_dir = INT_MIN;
    for(int i = meio + 1; i <= fim; i++) {
        soma += vetor[i];
        if(soma > soma_dir) {
            pos2 = i;
            soma_dir = soma;
        }
    }

    return make_tuple(pos1, pos2, soma_esq + soma_dir);
}

tuple<int, int, int> max_subarray(int *vetor, int ini, int fim) {

    if(ini == fim)
        return make_tuple(ini, fim, vetor[ini]);

    int meio = ini + (fim - ini) / 2;
    int dir1, esq1, soma1;
    int dir2, esq2, soma2;
    int dir3, esq3, soma3;

    tie(dir1, esq1, soma1) = max_subarray(vetor, ini, meio);
    tie(dir2, esq2, soma2) = max_subarray(vetor, meio + 1, fim);
    tie(dir3, esq3, soma3) = max_cross_subarray(vetor, ini, fim);

    if(soma1 >= soma2 && soma1 >= soma3)
        return make_tuple(dir1, esq1, soma1);
    else if(soma2 >= soma1 && soma2 >= soma3)
        return make_tuple(dir2, esq2, soma2);
    
    return make_tuple(esq3, dir3, soma3);

}

int main() {

    int N;
    int *vetor;
    int x1, x2, x3;

    cin >> N;
    vetor = new int[N];

    for(int i = 0; i < N; i++)
        cin >> vetor[i];

    tie(x1, x2, x3) = max_subarray(vetor, 0, N - 1);

    cout << x3 << endl;

    delete[] vetor;

    return 0;
}