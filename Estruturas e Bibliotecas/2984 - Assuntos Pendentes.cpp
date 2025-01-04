#include <iostream>

using namespace std;

int main() {

    int X = 0;
    string S;

    cin >> S;

    for(char c: S) {
        if(c == '(')
            X++;
        else if(X > 0)
            X--;
    }

    if(X == 0)
        cout << "Partiu RU!" << endl;
    else
        cout << "Ainda temos " << X << " assunto(s) pendente(s)!" << endl;

    return 0;
}