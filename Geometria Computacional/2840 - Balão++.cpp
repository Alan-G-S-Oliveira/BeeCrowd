#include <iostream>

#define PI 3.1415

using namespace std;

int main() {

    unsigned long int R, L;
    double volume;

    cin >> R >> L;
    volume =  (3 * L) / (4 * PI * (R * R * R));

    cout << static_cast<int>(volume) << endl;

    return 0;
}