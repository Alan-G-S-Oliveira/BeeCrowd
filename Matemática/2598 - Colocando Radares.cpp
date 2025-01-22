#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int C, N, M;

    cin >> C;
    for(int i = 0; i < C; i++) {
        cin >> N >> M;
        cout << ceil(N / static_cast<double>(M)) << endl;
    }

    return 0;
}