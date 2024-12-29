#include <iostream>

using namespace std;

long int pow(int x, int y) {

    long int saida = 1;
    for(int i = 0; i < y; i++)
        saida *= x;
    return saida;

}

int main() {

    int R;
    cin >> R;

    cout << pow(3, R) << endl;

    return 0;
}