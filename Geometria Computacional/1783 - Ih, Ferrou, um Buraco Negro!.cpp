#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double X0, Y0, X11, X12, Y11, Y12, X21, X22, Y21, Y22;

    cin >> X11 >> Y11;
    cin >> X12 >> Y12;
    cin >> X21 >> Y21;
    cin >> X22 >> Y22;

    double A, B, C, D, E, F;
    A = 2 * (X12 - X11);
    B = 2 * (Y12 - Y11);
    C = pow(X12, 2) + pow(Y12, 2) - pow(X11, 2) - pow(Y11, 2);
    D = 2 * (X22 - X21);
    E = 2 * (Y22 - Y21);
    F = pow(X22, 2) + pow(Y22, 2) - pow(X21, 2) - pow(Y21, 2);

    Y0 = (A * F - C * D) / (A * E - B * D);
    cout << Y0 << endl;

    return 0;
}