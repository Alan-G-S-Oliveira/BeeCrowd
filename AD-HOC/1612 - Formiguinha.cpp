#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T;
    long int N;

    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++) {
        cin >> N;
        cin.ignore();

        cout.precision(0);
        cout << fixed;
        cout << ceil(N / 2.0) << endl;
    }

    return 0;
}