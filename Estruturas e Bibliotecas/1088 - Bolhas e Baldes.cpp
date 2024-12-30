#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> &vetor, int ini, int fim) {
    int meio = ini + (fim - ini) / 2;
    int n1 = meio - ini + 1;
    int n2 = fim - meio;

    vector<int> aux1(n1);
    vector<int> aux2(n2);

    for(int i = 0; i < n1; i++)
        aux1[i] = vetor[ini + i];
    for(int i = 0; i < n2; i++)
        aux2[i] = vetor[meio + 1 + i];

    int i = 0, j = 0, k = ini;
    int saida = 0;

    while(i < n1 && j < n2) {
        if(aux1[i] <= aux2[j]) {
            vetor[k] = aux1[i];
            i++;
        } else {
            vetor[k] = aux2[j];
            j++;
            saida += (n1 - i);
        }
        k++;
    }

    while(i < n1) {
        vetor[k] = aux1[i];
        i++;
        k++;
    }

    while(j < n2) {
        vetor[k] = aux2[j];
        j++;
        k++;
    }
    return saida;
}

int merge_sort(vector<int> &vetor, int ini, int fim) {

    int saida = 0;

    if(ini < fim) {
        int meio = ini + (fim - ini) / 2;

        saida += merge_sort(vetor, ini, meio);
        saida += merge_sort(vetor, meio + 1, fim);

        saida += merge(vetor, ini, fim);
    }

    return saida;

}

int main() {
    
    int N;

    while(cin >> N) {
        if(N == 0)
            break;

        vector<int> P(N);
        for(int i = 0; i < N; i++)
            cin >> P[i];

        int qtd = merge_sort(P, 0, N - 1);

        cout << ((qtd % 2 == 0)? "Carlos": "Marcelo") << endl;

    }

    return 0;
}
