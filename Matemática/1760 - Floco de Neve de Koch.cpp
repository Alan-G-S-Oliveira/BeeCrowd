#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int l;
    while(cin >> l) {
        double area = (pow(l, 2) * sqrt(3) / 4) * (8 / 5.0);
        cout.precision(2);
        cout << fixed;
        cout << area << endl; 
    }

    return 0;
}