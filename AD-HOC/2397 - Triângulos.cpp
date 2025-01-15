#include <iostream>

using namespace std;

int main() {

    int A, B, C;

    cin >> A >> B >> C;

    if(A + B <= C || A + C <= B || B + C <= A)
        cout << 'n' << endl;
    else if(A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A)
        cout << 'r' << endl;
    else if(A * A + B * B > C * C && A * A + C * C > B * B && B * B + C * C > A * A)
        cout << 'a' << endl;
    else
        cout << 'o' << endl;

    return 0;
}