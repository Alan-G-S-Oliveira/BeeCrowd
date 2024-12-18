#include <iostream>

using namespace std;

int main() {

    string aux;
    while(cin >> aux) {
        string R = "", L = "", J = "";
        bool mais = false, igual = false;

        for(char i: aux) {
            if(i == '+')
                mais = true;
            else if(i == '=')
                igual = true;
            else if(mais && igual)
                J.push_back(i);
            else if(mais)
                L.push_back(i);
            else
                R.push_back(i);
        }

        if(J == "J")
            cout << stoi(R) + stoi(L);
        else if(L == "L")
            cout << stoi(J) - stoi(R);
        else
            cout << stoi(J) - stoi(L);
        cout << endl;
    }

    return 0;
}