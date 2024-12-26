#include <iostream>

using namespace std;

int main() {

    int N, aux;
    bool *faltando;

    cin >> N;
    cin.ignore();

    faltando = new bool[N];
    for(int i = 0; i < N; i++)
        faltando[i] = true;

    for(int i = 1; i < N; i++) {
        cin >> aux;
        faltando[aux - 1] = false;
    }

    for(int i = 0; i < N; i++) {
        if(faltando[i]) {
            cout << i + 1 << endl;
            break;
        }
    }

    delete[] faltando;

    return 0;
}