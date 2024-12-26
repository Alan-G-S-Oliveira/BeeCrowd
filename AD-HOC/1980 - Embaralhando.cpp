#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int fatorial(unsigned long int x) {
    unsigned long long int saida = 1;
    for(unsigned long int i = 2; i <=x; i++)
        saida *= i;
    return saida;
}

int main() {

    string S;

    while(true) {
        cin >> S;
        cin.ignore();

        if(S == "0")
            break;

        cout << fatorial(S.size()) << endl;
    }

    return 0;
}