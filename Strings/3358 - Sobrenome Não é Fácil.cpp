#include <iostream>

using namespace std;

int main() {

    int N;
    string S;
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> S;
        int cont = 0;
        bool dificil = false;
        for(char s: S) {
            bool achou = false;
            for(char c: vogais) {
                if(s == c) {
                    achou = true;
                    break;
                }
            }
            if(!achou) {
                cont++;
                if(cont == 3) {
                    dificil = true;
                    break;
                }
            } else 
                cont = 0;
        }
        if(dificil) 
            cout << S << " nao eh facil" << endl;
        else   
            cout << S << " eh facil" << endl;
    }

    return 0;
}