#include <iostream>

using namespace std;

int main() {

    int T, N;

    int resultado[] = {1, 7, 9, 3};

    cin.tie(NULL);
    cout.sync_with_stdio(false);

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> N;

        cout << resultado[N % 4] << "\n";
    }

}