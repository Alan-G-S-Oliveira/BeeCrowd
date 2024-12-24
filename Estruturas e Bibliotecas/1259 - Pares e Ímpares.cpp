#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool inverso(int x, int y) {
    return x > y;
}

int main() {

    int N, T;
    vector<int> pares, impares;

    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        cin >> T;
        cin.ignore();
        if(T % 2 == 0)
            pares.push_back(T);
        else
            impares.push_back(T);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), inverso);

    for(int i: pares)
        cout << i << endl;
    for(int i : impares)
        cout << i << endl;

    return 0;
}