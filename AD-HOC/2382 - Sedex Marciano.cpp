#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int L, A, P, R;

    cin >> L >> A >> P >> R;

    if(sqrt(L * L + A * A) > 2.0 * R)
        cout << 'N' << endl;
    else if(sqrt(L * L + P * P) > 2.0 * R)
        cout << 'N' << endl;
    else if(sqrt(A * A + P * P) > 2.0 * R)
        cout << 'N' << endl;
    else
        cout << 'S' << endl;

    return 0;
}