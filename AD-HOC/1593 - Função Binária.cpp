#include <iostream>

using namespace std;

int contar_uns(string &numero) {
    string aux = numero;
    int cont = 0;

    while(aux != "0") {
        string quociente = "";
        int resto = 0;
        for(char i: aux) {
            int digito = resto * 10 + (i - '0');
            quociente += (digito / 2) + '0';
            resto = digito % 2;
        }

        if(resto == 1)
            cont++;

        string temporario = "";
        bool achou_1 = false;
        for(char i: quociente) {
            if(i != '0')
                achou_1 = true;
            if(achou_1)
                temporario.push_back(i);
        }
        aux = temporario != ""? temporario: "0";
    }


    return cont;
}

int main() {

    int T;
    string numero;

    cin >> T;
    cin.ignore();
    for(int i = 0; i < T; i++) {

        cin >> numero;
        cout << contar_uns(numero) << endl;
    }

    return 0;
}