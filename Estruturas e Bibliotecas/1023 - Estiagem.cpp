#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct casa {
    long int moradores;
    long int consumo;
    long int media;
};

double roundDown(double valor) {
    return floor(valor * 100) / 100;
}

bool compara(casa x, casa y) {
    return x.media < y.media;
}

int main() {

    int N, cont = 1;

    while(cin >> N) {
        cin.ignore();
        if(N == 0)
            break;

        if(cont != 1)
            cout << endl;

        vector<casa> casas(N);
        casa aux;

        long int total_moradores = 0;
        long int total_consumo = 0;
        for(int i = 0; i < N; i++) {
            cin >> aux.moradores >> aux.consumo;
            cin.ignore();
            aux.media = aux.consumo / aux.moradores;
            casas[i] = aux;
            total_moradores += aux.moradores;
            total_consumo += aux.consumo;
        } 
        sort(casas.begin(), casas.end(), compara);

        long int moradores = casas[0].moradores;
        long int media = casas[0].media;

        cout << "Cidade# " << cont << ":" << endl;
        for(int i = 1; i < N; i++) {
            if(casas[i].media == media)
                moradores += casas[i].moradores;
            else {
                cout << moradores << "-" << media << " ";
                media = casas[i].media;
                moradores = casas[i].moradores;
            }
        }
        cout << moradores << "-" << media << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Consumo medio: " << roundDown(static_cast<double>(total_consumo) / total_moradores) << " m3." << endl;

        cont++;
    }

    return 0;
}