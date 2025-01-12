#include <iostream>

using namespace std;

int main() {

    int A, B, C;
    int H, L;

    cin >> A >> B >> C;
    cin >> H >> L;

    if(min(A, B) <= min(H, L) && max(A, B) <= max(H, L))
        cout << 'S' << endl;
    else if(min(A, C) <= min(H, L) && max(A, C) <= max(H, L))
        cout << 'S' << endl;
    else if(min(B, C) <= min(H, L) && max(B, C) <= max(H, L))
        cout << 'S' << endl;
    else
        cout << 'N'  << endl;

    return 0;
}