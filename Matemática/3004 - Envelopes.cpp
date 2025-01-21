#include <iostream>

using namespace std;

int main() {

    int n;
    int X1, X2, Y1, Y2;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> X1 >> X2 >> Y1 >> Y2;

        cout << (max(X1, X2) < max(Y1, Y2) && min(X1, X2) < min(Y1, Y2)? 'S': 'N') << endl;
    }

    return 0;
}