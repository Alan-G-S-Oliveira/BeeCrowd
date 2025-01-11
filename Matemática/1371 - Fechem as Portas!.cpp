#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N;

    while(cin >> N) {
        if(N == 0)
            break;

        bool espaco = false;
        int limite = static_cast<int>(sqrt(N));
        for(int i = 1; i <= limite; i++) {
            if(i * i <= N) {
                if(espaco)
                    cout << ' ';
                else
                    espaco = true;
                cout << i * i;
            }
        }
        cout << endl;
    }

    return 0;
}