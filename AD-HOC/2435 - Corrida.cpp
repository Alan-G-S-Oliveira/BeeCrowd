#include <iostream>

using namespace std;

int main() {

    int N1, D1, V1;
    int N2, D2, V2;

    cin >> N1 >> D1 >> V1;
    cin.ignore();
    cin >> N2 >> D2 >> V2;

    if(static_cast<double>(D1) / V1 < static_cast<double>(D2) / V2)
        cout << N1 << endl;
    else
        cout << N2 << endl;

    return 0;
}