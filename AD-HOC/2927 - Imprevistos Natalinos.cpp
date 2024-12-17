#include <iostream>

using namespace std;

int main() {

    int A, C, X, Y;
    cin >> A >> C >> X >> Y;

    if((C - Y - X) >= (A + 1))
        cout << "Igor feliz!" << endl;
    else {
        if(X > (Y / 2))
            cout << "Caio, a culpa eh sua!" << endl;
        else
            cout << "Igor bolado!" << endl;
    }

    return 0;
}