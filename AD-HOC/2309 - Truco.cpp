#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> cartas;
    cartas[4] = 1;
    cartas[5] = 2;
    cartas[6] = 3;
    cartas[7] = 4;
    cartas[12] = 5;
    cartas[11] = 6;
    cartas[13] = 7;
    cartas[1] = 8;
    cartas[2] = 9;
    cartas[3] = 10;

    int N, A = 0, B = 0;
    int A1, A2, A3, B1, B2, B3;

    cin >> N;
    for(int i = 0; i < N; i++) {

        int auxA = 0, auxB = 0;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        if(cartas[A1] >= cartas[B1])
            auxA++;
        else
            auxB++;
        if(cartas[A2] >= cartas[B2])
            auxA++;
        else
            auxB++;
        if(cartas[A3] >= cartas[B3])
            auxA++;
        else
            auxB++;

        if(auxA > auxB)
            A++;
        else
            B++;
    }

    cout << A << ' ' << B << endl;

    return 0;
}