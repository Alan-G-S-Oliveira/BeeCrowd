#include <iostream>
#include <algorithm>
#include <limits>
#include <map>

using namespace std;

int main() {

    string A, V;
    map<string, int> X;

    while(cin >> A >> V && A != "0") {
        X[A]++;
        X[V] = numeric_limits<int>::min();
    }
    
    cout << "HALL OF MURDERERS\n";
    for(const auto &par: X) {
        if(par.second > 0)
            cout << par.first << ' ' << par.second << endl;
    }

    return 0;
}