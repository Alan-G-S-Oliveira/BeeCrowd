#include <iostream>

using namespace std;

int main() {

    int n, m, c;

    while(cin >> n >> m >> c && (n != 0 || m != 0 || c != 0))
        cout << (((n - 7) * (m - 7) + c) / 2) << endl;

    return 0;
}