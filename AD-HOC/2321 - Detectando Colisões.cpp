#include <iostream>

using namespace std;

int main() {

    int x0, x1, y0, y1;
    int a0, a1, b0, b1;

    cin >> x0 >> y0 >> x1 >> y1;
    cin >> a0 >> b0 >> a1 >> b1;

    cout << !(x1 < a0 || x0 > a1 || y0 > b1 || y1 < b0) << endl;

    return 0;
}