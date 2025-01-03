#include <iostream>

using namespace std;

int main() {

    string S, T;

    while(cin >> S >> T) {
        cin.ignore();
        if(S == T && T == "*")
            break;

        int qtd = 0;
        bool trocou = false;
        for(unsigned int i = 0; i < S.size(); i++) {
            if(S[i] == T[i]) {
                if(trocou) {
                    qtd++;
                    trocou = false;
                }
            } else {
                trocou = true;
            }
        }
        if(trocou)
            qtd++;

        cout << qtd << endl;
    }

    return 0;
}