#include <iostream>

using namespace std;

int main() {

    int D, I, X, F;
    cin >> D >> I >> X >> F;

    if(F % 2 == 0)
        cout << I << endl;
    else if(D % 2 == 0)
        cout << I - X << endl;
    else
        cout << I + X << endl;

    return 0;
}