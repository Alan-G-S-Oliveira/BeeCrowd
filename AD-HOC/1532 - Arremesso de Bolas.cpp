#include <iostream>
#include <vector>

using namespace std;

bool busca_binaria(vector<int> array, int n, int ini, int peso) {
    int fim = array.size() - 1;
    int meio;

    while(ini < fim) {

        meio = ini + (fim - ini) / 2;
    
        if(array[meio] - peso == n)
            return true;
        else if(array[meio] - peso > n)
            fim = meio - 1;
        else
            ini = meio + 1;
    }

    return array[ini] - peso == n;
    
}

int main() {

    int N, V;

    while(cin >> N >> V) {
        if(N == V && V == 0)
            break;

        vector<int> trajetoria;
        trajetoria.push_back(0);

        int soma = 0;
        for(int i = V; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                soma += i;
                trajetoria.push_back(soma);
            }
        }

        int ini = 0;
        bool valido = false;
        for(int i = V; i > 0; i--) {
            valido = busca_binaria(trajetoria, N, ini, trajetoria[ini]);
            if(valido)
                break;
            ini += i;
        }

        cout << (valido? "possivel": "impossivel") << endl;

    }

    return 0;
}