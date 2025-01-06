#include <iostream>
#include <vector>

using namespace std;

int sequencia_decrescente(vector<int> cartas, int inicio) {
    int N = cartas.size();
    int atual = inicio;
    int saida = 0;

    for(int i = inicio; inicio < N; i++) {
        if(cartas[atual] < cartas[i])
            break;
        saida++;
        atual = i;
    }
    return saida;
}

int main() {

    int N;

    cin >> N;
    cin.ignore();

    vector<int> cartas(N);
    for(int i = 0; i < N; i++)
        cin >> cartas[i];

    int saida = 0;
    int i = 0;
    while(i < N) {
        i += sequencia_decrescente(cartas, i);
        saida++;
    }

    cout << saida << endl;

    return 0;
}