#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, L, D;

    cin >> N >> L >> D;

    cout << ceil((N * D) / (L * 1000.0)) * L << endl;

    return 0;
}