#include <iostream>
#include <set>

using namespace std;

int main() {

    int Q, E, Si;
    set<int> escritorios;

    cin >> Q >> E;
    cin.ignore();

    for(int i = 0; i < E; i++) {
        cin >> Si;
        escritorios.insert(Si);
    }

    for(int i = 0; i < Q; i++) {
        cin >> Si;
        cout << !escritorios.count(Si) << endl;
        escritorios.insert(Si);
    }

    return 0;
}