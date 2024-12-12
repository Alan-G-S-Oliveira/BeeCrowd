#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int T, Q;
    double A, B;

    while(true) {

        cin >> T;
        if(T == 0)
            break;

        for(int i = 1; i <= T; i++) {
            cin >> Q >> A >> B;
            double X = Q * (((A + B) * 5.0) / 2);
            cout << "Size #" << i << ":" << endl;
            cout << "Ice Cream Used: " << fixed << setprecision(2) << X << " cm2" << endl;
        }
        cout << endl;

    }

    return 0;
}