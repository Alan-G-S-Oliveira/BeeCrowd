#include <iostream>

using namespace std;

int main() {

    string cpf;
    while(cin >> cpf) {
        int cont = 1;
        int soma1 = 0, soma2 = 0;
        for(int i = 0; i < 11; i++) {
            if(cpf[i] >= '0' && cpf[i] <= '9') {
                soma1 += cont * (cpf[i] - '0');
                soma2 += (10 - cont) * (cpf[i] - '0');
                cont++;
            }
        }
        if((soma1 % 11) % 10 == cpf[12] - '0' && (soma2 % 11) % 10 == cpf[13] - '0')
            cout << "CPF valido" << endl;
        else
            cout << "CPF invalido" << endl;
    }

    return 0;
}