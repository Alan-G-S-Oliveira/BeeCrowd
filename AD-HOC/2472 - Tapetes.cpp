#include <iostream>

using namespace std;

int main() {

    unsigned long int L, N;
    cin >> L >> N;

    unsigned long int resultado = ((L - (N - 1)) * (L - (N - 1))) + (N - 1);

    cout << resultado << endl;

    return 0;
}