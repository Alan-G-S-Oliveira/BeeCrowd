#include <iostream>

using namespace std;

int function(int n) {

    int x2 = 1, x3 = 1, x4 = 1;
    for(int i = 5; i < n; i++) {
        int aux = x4;
        x4 = (x2 + x3) % 1000000007;
        x2 = x3 % 1000000007;
        x3 = aux % 1000000007;
    }

    return x4;

}

int main() {

    int n;
    cin >> n;
    cout << function(n) << endl;

    return 0;
}