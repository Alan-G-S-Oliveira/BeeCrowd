#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int cont = 1;
    int R, W, L;

    while(cin >> R && R != 0) {
        cin >> W >> L;
        
        if(sqrt(pow(W, 2) + pow(L, 2)) <= 2 * R)
            cout << "Pizza " << cont << " fits on the table.\n";
        else
            cout << "Pizza " << cont << " does not fit on the table.\n";
            
        cont++;
    }

    return 0;
}