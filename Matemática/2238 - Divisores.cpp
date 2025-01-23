#include <iostream>

using namespace std;

int main() {

    int A, B, C, D;
    int saida = -1;

    cin >> A >> B >> C >> D;

    if(A != B && C != D) {
        for(int i = A; i <= C; i += A) {
            if(i % B != 0 && C % i == 0 && D % i != 0) {
                saida = i;
                break;
            }
        }
    }

    cout << saida << endl;

    return 0;
}