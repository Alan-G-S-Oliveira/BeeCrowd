#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N, ant, atual, cont = 1, maior = 1;
    string aux, num;
    
    cin >> N;
    cin.ignore();
    getline(cin, aux);
    istringstream ss(aux);
    ss >> num;
    ant = stoi(num);
    atual = ant;

    while(ss >> num) {
        ant = atual;
        atual = stoi(num);
        if(atual == ant)
            cont++;
        else {
            if(cont > maior)
                maior = cont;
            cont = 1;
        }
    }

    if(cont > maior)
        maior = cont;

    cout << maior << endl;

    return 0;
}