#include <iostream>

using namespace std;

int main() {

    int N, T, ant, total = 10;

    cin >> N;
    cin >> ant;
    for(int i = 1; i < N; i++) {
        cin >> T;
        if(T - ant <= 10)
            total += T - ant;
        else
            total += 10;

        ant = T;
    }

    cout << total << endl;

    return 0;
}