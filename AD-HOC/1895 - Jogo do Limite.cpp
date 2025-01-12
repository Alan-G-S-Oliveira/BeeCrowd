#include <iostream>

using namespace std;

int main() {

    int N, T, L, aux;
    int A = 0, B = 0;

    cin >> N >> T >> L;

    for(int i = 1; i < N; i++) {
        cin >> aux;
        if(abs(T - aux) <= L) {

            if(i % 2 == 0)
                B += abs(T - aux);
            else
                A += abs(T - aux);

            T = aux;
        }
    }

    cout << A << ' ' << B << endl;

    return 0;
}