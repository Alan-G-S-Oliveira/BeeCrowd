#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct carne {
    string nome;
    int validade;
};

bool compara_validade(carne c1, carne c2) {
    return c1.validade < c2.validade;
}

int main() {

    int N;
    
    while(cin >> N) {

        vector<carne> vetor(N);
        carne aux;
        for(int i = 0; i < N; i++){
            cin >> aux.nome >> aux.validade;
            vetor[i] = aux;
        }

        sort(vetor.begin(), vetor.end(), compara_validade);
        for(int i = 0; i < N; i ++) {
            cout << vetor[i].nome;
            if(i != N - 1)
                cout << " ";
        }
        cout << endl;

    }

    return 0;
}