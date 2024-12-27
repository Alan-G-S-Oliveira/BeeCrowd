#include <iostream>

using namespace std;

int main() {

    int N;
    int *tabuleiro;

    cin >> N;
    cin.ignore();

    tabuleiro = new int[N];
    for(int i = 0; i < N; i++)
        cin >> tabuleiro[i];

    for(int i = 0; i < N; i++) {
        int qtd = tabuleiro[i];
        if(i != 0)
            qtd += tabuleiro[i - 1];

        if(i != N - 1)
            qtd += tabuleiro[i + 1];

        cout << qtd << endl;
        
    }
    
    delete[] tabuleiro;

    return 0;
}