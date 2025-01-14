#include <iostream>

using namespace std;

char substituir(char c) {
    if(c == 's' || c == 'j' || c == 'z' || c == 'p' || c == 'b' || c == 'v' || c == 'x')
        return 'f';
    else if(c == 'S' || c == 'J' || c == 'Z' || c == 'P' || c == 'B' || c == 'V' || c == 'X')
        return 'F';
    else
        return c;
}

int main() {

    char c;
    char ultimo = '\0';

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(cin.get(c)) {
        if(c != '\n' && c != ' ') {
            c = substituir(c);
            if(!((c == 'f' || c == 'F') && (ultimo == 'f' || ultimo == 'F'))) {
                cout << c;
                ultimo = c;
            }
        } else {
            cout << c;
            ultimo = '\0';
        }
    }
    return 0;
}