#include <iostream>

using namespace std;

int main() {

    string S;

    cin >> S;

    if(S == "XXO" || S == "OXX")
        cout << "Alice" << endl;
    else if(S == "XOX")
        cout << '*' << endl;
    else
        cout << '?' << endl;

    return 0;
}