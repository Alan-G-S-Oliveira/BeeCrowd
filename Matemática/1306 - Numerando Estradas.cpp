#include <iostream>

using namespace std;

int main() {

    int R, N;
    int cont = 1;

    while(cin >> R >> N) {
        if(R == N && N == 0)
            break;

        cout << "Case " << cont << ": ";
        if((R - 1) / N <= 26)
            cout << (R - 1) / N << endl;
        else
            cout << "impossible" << endl;
        cont++;
    }

    return 0;
}