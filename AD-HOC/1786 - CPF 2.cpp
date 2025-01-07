#include <iostream>

using namespace std;

int main() {

    string CPF;

    while(cin >> CPF) {
        int b1 = 0, b2 = 0;
        for(int i = 1; i <= 9; i++) {
            b1 += (CPF[i - 1] - '0') * i;
            b2 += (CPF[9 - i] - '0') * i;
        }

        b1 %= 11;
        b2 %= 11;
        
        b1 = (b1 == 10)? 0: b1;
        b2 = (b2 == 10)? 0: b2;

        string saida = "";
        for(int i = 0; i < 9; i++) {
            if(i != 0 && i % 3 == 0)
                saida.push_back('.');
            saida.push_back(CPF[i]);
        }
        saida.push_back('-');
        saida.push_back(b1 + '0');
        saida.push_back(b2 + '0');

        cout << saida << endl;
    }

    return 0;
}