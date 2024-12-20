#include <iostream>

using namespace std;

int main() {

    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry, N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;
        if(Rx >= Ax && Rx <= Bx && Ry >= Ay && Ry <= Dy)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}