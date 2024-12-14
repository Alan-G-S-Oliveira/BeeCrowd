#include <iostream>

using namespace std;

string upper(string n) {
    string saida = "";
    for(char s: n) {
        if(s >= 'a' && s <= 'z')
            saida.push_back(s - 32);
        else
            saida.push_back(s);
    }
    return saida;
}

int main() {

    bool x = true;
    string atual, maior;
    while(getline(cin, atual)) {

        if(x) {
            x = false;
            maior = atual;
        } else {
            if(upper(atual) > upper(maior))
                maior = atual;
        }
    }
    cout << maior << endl;

    return 0;
}