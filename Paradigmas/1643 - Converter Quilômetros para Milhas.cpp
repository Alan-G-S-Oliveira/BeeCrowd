#include <iostream>
#include <vector>

using namespace std;

vector<int> fibonacci(int n) {
    vector<int> saida;
    int ant = 1;
    int atual = 1;

    while(atual <= n) {
        saida.push_back(atual);
        atual += ant;
        ant = atual - ant;
    }

    return saida;
}

int main() {

    int t, x;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> x;
        vector<int> sequencia = fibonacci(x); 
        int tamanho = sequencia.size();

        vector<int8_t> pesos(tamanho, 0);

        int soma = 0;
        for(int j = tamanho - 1; j >= 0; j--) {
            if(soma + sequencia[j] <= x) {
                soma += sequencia[j];
                pesos[j] = 1;
                if(soma == x)
                    break;
            }
        }

        int saida = 0;
        for(int j = tamanho - 1; j > 0; j--)
            saida += (sequencia[j - 1] * pesos[j]);
        cout << saida << endl;
    }

    return 0;
}