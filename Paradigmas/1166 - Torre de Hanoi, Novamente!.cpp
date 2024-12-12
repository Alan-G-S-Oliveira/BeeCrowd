#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int T, N;

    cin >> T;
    for(int i = 0; i < T; i++) {

        cin >> N;
        vector<int> hastes(N);

        int cont = 1;
        int j = 0;
        while(true) {
            int aux = static_cast<int>(sqrt(hastes[j] + cont));
            if((aux * aux) == (hastes[j] + cont) || hastes[j] == 0) {
                hastes[j] = cont;
                cont++;
                j = 0;
            } else {
                j++;
                if(j == N)
                    break;
            }
        }
        cout << cont - 1 << endl;

    }

    return 0;
}