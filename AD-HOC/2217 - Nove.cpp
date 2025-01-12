#include <iostream>

using namespace std;

int main() {

    int T, N;

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> N;
        cout << (N % 2 == 0? 1: 9) << endl;
    }

    return 0;
}