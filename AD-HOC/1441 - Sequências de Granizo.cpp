#include <iostream>

using namespace std;

int main() {

    int H;
    while(true) {
        cin >> H;
        if(H == 0)
            break;
        
        int maior = H;
        while(H != 1) {
            if(H % 2 == 0)
                H /= 2;
            else
                H = H * 3 + 1;
            if(H > maior)
                maior = H;
        }

        cout << maior << endl;

    }

    return 0;
}