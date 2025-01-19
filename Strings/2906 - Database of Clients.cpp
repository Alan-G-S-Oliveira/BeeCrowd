#include <iostream>
#include <set>

using namespace std;

string tratar_email(string email) {

    string saida = "";
    bool mais = false;
    bool arroba = false;

    for(char c: email) {
        if(c == '+')
            mais = true;
        else if(c == '@')
            arroba = true;
        else if(!mais && !arroba && c != '.')
            saida.push_back(c);

        if(arroba)
            saida.push_back(c);
        
    }

    return saida;
}

int main() {

    int N;
    string aux;
    set<string> emails;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> aux;
        emails.insert(tratar_email(aux));
    }

    cout << emails.size() << endl;

    return 0;
}