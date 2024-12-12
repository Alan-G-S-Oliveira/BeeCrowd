#include <iostream>

using namespace std;

int main() {

    int n;
    string m;

    while(cin >> n >> m) {

        int aux = 0;
        for(char i: m)
            aux += i - '0';
        cout << aux << (aux % 3 == 0? " sim": " nao") << endl;

    }

    return 0;
}