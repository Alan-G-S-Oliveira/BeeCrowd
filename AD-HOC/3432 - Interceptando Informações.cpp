#include <iostream>

using namespace std;

int main() {

    int N;
    bool valido = true;

    for(int i = 0; i < 8; i++) {
        cin >> N;
        if(N == 9)
            valido = false;
    }

    cout << (valido? 'S': 'F') << endl;

    return 0;
}