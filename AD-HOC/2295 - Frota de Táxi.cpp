#include <iostream>

using namespace std;

int main() {

    double A, G, Ra, Rg;

    cin >> A >> G >> Ra >> Rg;

    if(Ra / A > Rg / G)
        cout << 'A' << endl;
    else
        cout << 'G' << endl;

    return 0;
}