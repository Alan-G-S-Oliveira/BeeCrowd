#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool eh_operador(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedencia(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return -1;
}

string infixa_para_posfixa(string &expr) {
    stack<char> operadores;
    string saida = "";

    for (char c : expr) {
        if (isdigit(c) || isalpha(c)) {
            saida += c;
        } else if (c == '(') {
            operadores.push(c);
        } else if (c == ')') {
            while (!operadores.empty() && operadores.top() != '(') {
                saida += operadores.top();
                operadores.pop();
            }
            if (!operadores.empty())
                operadores.pop();
        } else if (eh_operador(c)) {
            while (!operadores.empty() && precedencia(operadores.top()) >= precedencia(c)) {
                saida += operadores.top();
                operadores.pop();
            }
            operadores.push(c);
        }
    }

    while (!operadores.empty()) {
        saida += operadores.top();
        operadores.pop();
    }

    return saida;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string formula;
        cin >> formula;

        string posfixa = infixa_para_posfixa(formula);
        cout << posfixa << endl;
    }

    return 0;
}
