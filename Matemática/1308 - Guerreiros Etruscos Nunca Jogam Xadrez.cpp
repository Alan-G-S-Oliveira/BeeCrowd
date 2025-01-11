#include <iostream>
#include <cmath>

using namespace std;

long long int raiz(long long int N) {
    long long int aux = sqrt(1 + 8 * N);
    return (aux - 1) / 2;
}

int main() {

    int T;
    long long int N;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        cout << raiz(N) << endl;
    }

    return 0;
}