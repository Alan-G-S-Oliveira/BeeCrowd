#include <iostream>

using namespace std;

int main() {

    int Xm, Ym, Xr, Yr;
    cin >> Xm  >> Ym >> Xr >> Yr;

    cout << abs(Xr - Xm) + abs(Yr - Ym) << endl;

    return 0;
}