#include <iostream>

using namespace std;

int um_algarismo(string n) {

    string saida = n;
    while(saida.size() != 1) {
        int aux = 0;
        for(char i: saida) {
            aux += i - '0';
        }
        saida = to_string(aux);
    }

    return stoi(saida);

}

int main() {

    string N, M;

    while(true) {
        cin >> N >> M;
        if(N == M && M == "0")
            break;

        int X1 = um_algarismo(N);
        int X2 = um_algarismo(M);

        if(X1 > X2)
            cout << 1 << endl;
        else if(X1 == X2)
            cout << 0 << endl;
        else
            cout << 2 << endl;
        
    }

    return 0;
}