#include <iostream>

using namespace std;

int main() {

    int T, A, B, C;

    cout.precision(2);
    cout << fixed;

    cin >> T;
    while(T--) {
        cin >> A >> B >> C;

        double aux = -B / (double)(2 * A);
        cout << A * aux * aux + B * aux + C << endl;
    }

    return 0;
}