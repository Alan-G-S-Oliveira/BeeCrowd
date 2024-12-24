#include <iostream>
#include <sstream>

using namespace std;

struct racional {
    int numerador;
    int denominador;
};

int mdc(int x, int y) {
    x = abs(x);
    y = abs(y);
    for(int i = min(x, y); i >= 1; i--) {
        if(x % i == 0 && y % i == 0)
            return i;
    }
    return 1;
}

int main() {

    int N;
    racional x, y, saida;
    char operacao;
    string aux, num;

    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        
        getline(cin, aux);
        istringstream ss(aux);
        ss >> num;
        x.numerador = stoi(num);
        ss >> num;
        ss >> num;
        x.denominador = stoi(num);
        ss >> num;
        operacao = num[0];
        ss >> num;
        y.numerador = stoi(num);
        ss >> num;
        ss >> num;
        y.denominador = stoi(num);
        
        switch (operacao) {
        case '+':
            saida.numerador = x.numerador * y.denominador + x.denominador * y.numerador;
            saida.denominador = x.denominador * y.denominador;
            break;
        case '-':
            saida.numerador = x.numerador * y.denominador - x.denominador * y.numerador;
            saida.denominador = x.denominador * y.denominador;
            break;
        case '*':
            saida.numerador = x.numerador * y.numerador;
            saida.denominador = x.denominador * y.denominador;
            break;
        case '/':
            saida.numerador = x.numerador * y.denominador;
            saida.denominador = x.denominador * y.numerador;
        default:
            break;
        }

        int aux = mdc(saida.numerador, saida.denominador);
        cout << saida.numerador << "/" << saida.denominador << " = ";
        cout << saida.numerador / aux << "/" << saida.denominador / aux << endl;
    }

    return 0;
}