#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> mes;

    mes[1] = 0;
    mes[2] = 31;
    mes[3] = 59;
    mes[4] = 90;
    mes[5] = 120;
    mes[6] = 151;
    mes[7] = 181;
    mes[8] = 212;
    mes[9] = 243;
    mes[10] = 273;
    mes[11] = 304;
    mes[12] = 334;

    int d1, m1, d2, m2;

    cin >> d1 >> m1;
    cin.ignore();
    cin >> d2 >> m2;

    cout << abs((mes[m1] + d1) - (mes[m2] + d2)) << endl;

    return 0;
}