#include <iostream>

using namespace std;

int fibanacci_mod(int x) {

    int ant = 1, atual = 2;
    if(x > 2){
        for(int i = 3; i <= x; i++) {
            atual += ant;
            ant = atual - ant;
        }
        return atual;
    }
    return x;
}

int main() {

    int N;
    while(true) {
        cin >> N;
        if(N == 0)
            break;

        cout << fibanacci_mod(N) << endl;
    }

    return 0;
}