#include <iostream>

using namespace std;

int main() {

    int N, C, S;
    int X, atual = 1, qtd = 0;

    cin >> N >> C >> S;
    cin.ignore();

    for(int i = 0; i < C; i++) {
        if(atual == S)
            qtd++;
        
        cin >> X;
        atual += X;

        if(atual > N)
            atual = 1;
        else if(atual < 1)
            atual = N;
    }
    if(atual == S)
        qtd++;

    cout << qtd << endl;

    return 0;
}