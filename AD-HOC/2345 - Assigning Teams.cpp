#include <iostream>

using namespace std;

int main() {

    int A, B, C, D;
    int C1, C2, C3;

    cin >> A >> B >> C >> D;
    C1 = abs((A + B) - (C + D));
    C2 = abs((A + C) - (B + D));
    C3 = abs((A + D) - (B + C)); 

    if(C1 < C2 && C1 < C3)
        cout << C1;
    else if(C2 < C1 && C2 < C3)
        cout << C2;
    else
        cout << C3;
    cout << endl;

    return 0;
}