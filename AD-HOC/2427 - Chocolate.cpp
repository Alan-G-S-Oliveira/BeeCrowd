#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int L;
    cin >> L;

    int saida = 1;
    while(L >= 2.0) {
        L /= 2.0;
        saida *= 4;
    }

    cout << saida << endl;

    return 0;
}