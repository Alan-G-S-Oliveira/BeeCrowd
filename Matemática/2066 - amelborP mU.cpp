#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int K;
    long long int aux;

    cin >> K;

    aux = 9 * pow(10, (K / 2) - 1);
    cout << static_cast<long long int>(((aux * (aux + 1) / 2) - aux) * pow(10, K % 2)) << endl;

    return 0;
}