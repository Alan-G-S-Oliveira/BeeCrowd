#include <iostream>

using namespace std;

int main() {

    int N;
    string T;
    
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        cin >> T;
        cin.ignore();
        int qtd = 0, cont = 0;
        for(char j: T) {
            if(j == '<')
                qtd++;
            else if(j == '>') {
                if(qtd != 0) {
                    qtd--;
                    cont++;
                }
            }
        }
        cout << cont << endl;
    }

    return 0;
}