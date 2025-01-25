#include <iostream>
#include <numeric>

using namespace std;

int main() {

    long int N, A, B;

    while(cin >> N >> A >> B) {
        if(N == A && A == B && B == 0)
            break;

        cout << (N / A) + (N / B) - (N / ((A * B) / gcd(A, B))) << endl;
    }

    return 0;
}