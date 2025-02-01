#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

inline int converter(char c) {
    if(c <= '9')
        return c - '0';
    else
        return 10 + c - 'a';
}

inline char desconverter(int n) {
    if(n <= 9)
        return n + '0';
    else
        return n - 10 + 'a';
}

inline long long int decimal(string numero) {

    long long int saida = 0;

    for(char c: numero)
        saida = saida * 16 + converter(c);

    return saida;
}

inline string hexadecimal(long long int numero) {
    
    if(numero == 0)
        return "0";

    string saida = "";
    
    while(numero > 0) {
        saida.push_back(desconverter(numero % 16));
        numero /= 16;
    }
    
    reverse(saida.begin(), saida.end());

    return saida;
} 

int main() {

    string R, G, B;
    long long int saida;
    long long int Rd, Gd, Bd;

    cin >> R;
    cin >> G;
    cin >> B;

    Rd = decimal(R);
    Gd = decimal(G);
    Bd = decimal(B);

    saida = 1 + (Rd / Gd) * (Rd / Gd) * ((Gd / Bd) * (Gd / Bd) + 1);

    cout << hexadecimal(saida) << endl;

    return 0;
}