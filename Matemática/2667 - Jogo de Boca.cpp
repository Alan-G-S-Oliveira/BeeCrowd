#include <iostream>

using namespace std;

int main() {

    int soma = 0;
    string N;

    cin >> N;
    for(char c: N)
        soma = (soma + c - '0') % 3;

    cout << soma << endl;

    return 0;
}