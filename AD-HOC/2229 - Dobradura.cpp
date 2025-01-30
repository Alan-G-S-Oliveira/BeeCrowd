#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, T, cont = 1;

    while(cin >> N && N != -1) {
        T = 2;
        while(N--)
            T = (T * 2) - 1;

        cout << "Teste " << cont << endl;
        cout << static_cast<int>(pow(T, 2)) << endl;
        cout << endl;

        cont++;
    }

    return 0;
}