#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int J, R;
    int *vetor;
    string aux, num;

    cin >> J >> R;
    cin.ignore();
    vetor = new int[J];
    for(int i = 0; i < J; i++)
        vetor[i] = 0;
    getline(cin, aux);

    istringstream ss(aux);
    int cont = 0;
    while(ss >> num) {
        vetor[cont] += stoi(num);
        cont = (cont + 1) % (J);
    }

    int maior = vetor[0];
    int indice = 0;

    for(int i = 0; i < J; i++) {
        if(vetor[i] >= maior) {
            maior = vetor[i];
            indice = i;
        }
    }

    cout << indice + 1 << endl;

    delete[] vetor;

    return 0;
}