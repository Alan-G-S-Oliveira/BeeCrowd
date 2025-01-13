#include <iostream>

using namespace std;

int main() {

    string formula;

    while(cin >> formula) {

        int A = 0, B = 0, C = 0;
        bool mais = true, igual = true;

        for(int i = formula.size() - 1; i >= 0; i--) {
            char c = formula[i];

            if(c == '=')
                igual = false;
            else if(c == '+')
                mais = false;
            else if(mais && igual)
                C = (C * 10) + (c - '0');
            else if(mais)
                B = (B * 10) + (c - '0');
            else
                A = (A * 10) + (c - '0');
        }

        if(A + B == C)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if(formula == "0+0=0")
            break;
    }

    return 0;
}