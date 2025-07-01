#include <iostream>
#include <string>

using namespace std;

void posfixo(string prefixo, string infixo, string &saida) {
    if(prefixo.empty())
        return;

    char atual = prefixo[0];
    int pos = infixo.find(atual);

    string infixo_1 = infixo.substr(0, pos); 
    string infixo_2 = infixo.substr(pos + 1);

    string prefixo_1 = prefixo.substr(1, infixo_1.size());
    string prefixo_2 = prefixo.substr(1 + infixo_1.size());

    posfixo(prefixo_1, infixo_1, saida);
    posfixo(prefixo_2, infixo_2, saida);

    saida.push_back(atual);
}

int main() {

    string pre, in;

    while(cin >> pre >> in) {
        string saida = "";
        posfixo(pre, in, saida);
        cout << saida << endl;
    }

    return 0;
}