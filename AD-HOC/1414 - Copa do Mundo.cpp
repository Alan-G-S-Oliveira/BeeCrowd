#include <iostream>

using namespace std;

int main() {

    int T, N;

    while(cin >> T >> N) {
        cin.ignore();
        if(T == N && N == 0)
            break;

        string time;
        int aux, pontos = 0;

        for(int i = 0; i < T; i++) {
            cin >> time >> aux;
            cin.ignore();

            pontos += aux;
        }

        cout << 3 * N - pontos << endl;

    }

    return 0;
}