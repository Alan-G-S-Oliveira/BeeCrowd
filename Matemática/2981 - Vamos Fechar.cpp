#include <iostream>

using namespace std;

int main() {

    int C, G, R;
    cin >> C >> G;

    R = C / G;

    if(R < 10)
        cout << "A UFSC fecha dia " << 21 + R << " de setembro.\n";
    else
        cout << "A UFSC fecha dia "<< R - 9 <<" de outubro.\n";

    return 0;
}