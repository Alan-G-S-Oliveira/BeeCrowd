#include <iostream>

using namespace std;

int main() {

    int indice_maior, indice_menor;
    double maior, menor;
    double N[5];

    for(int i = 0; i < 5; i++)
        cin >> N[i];
    
    maior = N[0];
    menor = N[0];
    indice_maior = 0;
    indice_menor = 0;

    for(int i = 1; i < 5; i++) {
        if(N[i] > maior) {
            maior = N[i];
            indice_maior = i;
        } else if(N[i] < menor) {
            menor = N[i];
            indice_menor = i;
        }
    }

    double saida = 0.0;
    for(int i = 0; i < 5; i++) {
        if(i != indice_maior && i != indice_menor)
            saida += N[i];
    }

    cout.precision(1);
    cout << fixed;
    cout << saida << endl;

    return 0;
}