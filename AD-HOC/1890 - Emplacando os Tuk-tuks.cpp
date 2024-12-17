#include <iostream>
#include <cmath>

using namespace std;

unsigned long int potencia(int n, int m) {

    unsigned long int saida = 1;
    for(int i = 1; i <= m; i++)
        saida *= n;
    return saida;

}

int main() {
    
    int T, C, D;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> C >> D;
        if(C == D && C == 0)
            cout << 0 << endl;
        else
            cout << potencia(26, C) * potencia(10, D) << endl; 
    }

    return 0;
}