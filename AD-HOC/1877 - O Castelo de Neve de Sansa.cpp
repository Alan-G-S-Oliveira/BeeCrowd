#include <iostream>

using namespace std;

int main() {

    int N, K, X, ant, cont = 0;
    bool pico = false;

    cin >> N >> K;
    cin >> ant;
    for(int i = 1; i < N; i++) {
        cin >> X;
        if(X < ant && !pico) {
            cont++;
            pico = true;
        } else if(X > ant)
            pico = false;
        ant = X;
    }

    cout << (cont == K? "beautiful": "ugly") << endl;

    return 0;
}