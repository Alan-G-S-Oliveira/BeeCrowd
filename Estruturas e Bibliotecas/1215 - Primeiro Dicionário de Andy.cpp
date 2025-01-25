#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <set>

using namespace std;

string lower(string &S) {
    string saida = "";

    for(char c: S) {
        if(c >= 'A' && c <= 'Z')
            saida.push_back(c + 32);
        else
            saida.push_back(c);
    }

    return saida;
}

bool letras(string &S) {
    return all_of(S.begin(), S.end(), [](char c) {return isalpha(c); });
} 

int main() {

    string S;
    vector<string> ordem;
    set<string> dicionario;

    while(cin >> S) {
        S = lower(S);
        
        if(letras(S)) {
            if(dicionario.count(S) == 0) {
                dicionario.insert(S);
                ordem.push_back(S);
            }
        } else {
            string aux = "";
            for(char  c: S) {
                if(isalpha(c))
                    aux.push_back(c);
                else {
                    if(dicionario.count(aux) == 0 && aux != "") {
                        dicionario.insert(aux);
                        ordem.push_back(aux);
                    }
                    aux.clear();
                }
            }
            if(dicionario.count(aux) == 0 && aux != "") {
                dicionario.insert(aux);
                ordem.push_back(aux);
            }
        }
    }

    sort(ordem.begin(), ordem.end());

    for(string s: ordem)
        cout << s << endl;

    return 0;
}