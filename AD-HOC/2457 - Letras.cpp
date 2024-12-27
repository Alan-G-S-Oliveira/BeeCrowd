#include <iostream>
#include <sstream>

using namespace std;

int main() {

    char letra;
    string texto, palavra;
    int qtd_palavras = 0, qtd_letra = 0;

    cin >> letra;
    cin.ignore();

    getline(cin, texto);

    istringstream ss(texto);
    while(ss >> palavra) {

        for(char i: palavra) {
            if(i == letra) {
                qtd_letra++;
                break;
            }
        }
        qtd_palavras++;
    }

    cout.precision(1);
    cout << fixed;
    cout << (static_cast<double>(qtd_letra) / qtd_palavras) * 100 << endl;

    return 0;
}