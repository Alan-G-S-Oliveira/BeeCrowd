#include <iostream>

using namespace std;

int main() {

    int V, A, P, S;

    cin >> V;
    cin >> A;

    P = V / A;
    S = V % A;
    for(int i = 0; i < A; i++) {
        if(i < S)
            cout << P + 1 << endl;
        else
            cout << P << endl;
    }

    return 0;
}