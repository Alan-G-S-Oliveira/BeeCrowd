#include <iostream>
#include <map>

using namespace std;

int main() {

    string N;

    map<char, int> dicionario;
    dicionario['W'] = 1000000;
    dicionario['H'] = 500000;
    dicionario['Q'] = 250000;
    dicionario['E'] = 125000;
    dicionario['S'] = 62500;
    dicionario['T'] = 31250;
    dicionario['X'] = 15625;

    while(true) {

        cin >> N;
        if(N == "*")
            break;

        long unsigned int cont = 0;
        int qtd = 0;
        for(long unsigned int i = 0; i < N.size(); i++) {

            if(N[i] == '/') {
                if(cont == 1000000)
                    qtd++;
                cont = 0.0;

            } else
                cont += dicionario[N[i]];
        }

        cout << qtd << endl;

    }

    return 0;
}