#include <iostream>
#include <queue>

using namespace std;

int main() {

    int N;
    while(true) {
        cin >> N;
        cin.ignore();
        if(N == 0)
            break;

        queue<int> fila;
        for(int i = 1; i <= N; i++)
            fila.push(i);
        cout << "Discarded cards: ";
        while(fila.size() >= 2) {
            cout << fila.front();
            if(fila.size() != 2)
                cout << ", ";
            fila.pop();
            int aux = fila.front();
            fila.pop();
            fila.push(aux);
        }
        cout << endl << "Remaining card: " << fila.front() << endl;
    }

    return 0;
}