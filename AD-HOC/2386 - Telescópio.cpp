#include <iostream>

using namespace std;

int main() {

    int telescopio, N, objeto, cont = 0;

    cin >> telescopio;
    cin.ignore();

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        cin >> objeto;
        cin.ignore();

        if(objeto * telescopio >= 40000000)
            cont++;
    }

    cout << cont << endl;

    return 0;
}