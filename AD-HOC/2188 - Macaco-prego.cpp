#include <iostream>

using namespace std;

int main() {

    int N, cont = 1;
    int X1, Y1, U1, V1, X2, Y2, U2, V2;

    while(cin >> N && N != 0) {
        cin >> X1 >> Y1 >> U1 >> V1;
        for(int i = 1; i < N; i++) {
            cin >> X2 >> Y2 >> U2 >> V2;

            X1 = max(X1, X2);
            Y1 = min(Y1, Y2);
            U1 = min(U1, U2);
            V1 = max(V1, V2);
        }

        cout << "Teste " << cont << endl;
        if(X1 < U1 && Y1 > V1)
            cout << X1 << ' ' << Y1 << ' ' << U1 << ' ' << V1 << endl;
        else
            cout << "nenhum" << endl;
        cout << endl;

        cont++;
    }

    return 0;
}