#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int64_t a1 = 1, a2 = 2, a3 = 4;

    if(N == 1) {
        cout << 1 << endl;
    } else if(N == 2) {
        cout << 2 << endl;
    } else if(N == 4) {
        cout << 3 << endl;
    } else {
        for(int i = 4; i <= N; i++) {
            int aux = a3;
            a3 = a1 + a2 + a3;
            a1 = a2;
            a2 = aux;
            
            a1 %= 1000000007;
            a2 %= 1000000007;
            a3 %= 1000000007;
        }
        cout << a3  << endl;
    } 

    return 0;
}