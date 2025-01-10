#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int gols_brasil, gols_alemanha, N;

    while(cin >> N) {
        if(N == 0)
            break;

        gols_brasil = floor((1 / 90.0) * N);
        gols_alemanha = ceil((7 / 90.0) * N);

        cout << "Brasil " << gols_brasil << " x Alemanha " << gols_alemanha << endl;
    }

    return 0;
}