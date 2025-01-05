#include <iostream>

using namespace std;

int main() {

    int N;

    while(cin >> N) {
        if(N == 0)
            break;

        int F = 0, P = 0;
        int cont = 1;

        while(N > 0) {
            P++;
            N--;

            if(N == 0) {
                P -= cont;
                F += cont;
                break;
            } else {
                N -= cont;
                F += cont;
                if(N < 0)
                    P -= abs(N);
            }
            cont++;
        }

        cout << F << " " << P << endl;
    }

    return 0;
}