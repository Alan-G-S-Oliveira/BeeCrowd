#include <iostream>

using namespace std;

int main() {

    string A, B, R;
    char sinal;

    cin >> A >> sinal >> B;

    for(unsigned int i = 0; i < A.size(); i++) {
        if(A[i] == '7')
            A[i] = '0';
    }

    for(unsigned int i = 0; i < B.size(); i++) {
        if(B[i] == '7')
            B[i] = '0';
    }

    R = to_string((sinal == '+')? stoi(A) + stoi(B): stoi(A) * stoi(B));

    bool printou = false;
    for(char c: R) {
        if(c != '7') {
            cout << c;
            printou = true;
        } else if(printou)
            cout << 0;
    }

    if(printou)
        cout << endl;
    else
        cout << 0 << endl;

    return 0;
}