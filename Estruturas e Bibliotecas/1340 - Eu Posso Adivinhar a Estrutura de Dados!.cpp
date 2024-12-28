#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {

    int n, x, y;

    while(cin >> n) {
        cin.ignore();
        if(n == 0)
            break;

        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> prioridade;

        bool eh_fila = true, eh_pilha = true, eh_prioridade = true;

        for(int i = 0; i < n; i++) {
            cin >> x >> y;
            cin.ignore();
            if(x == 1) {
                pilha.push(y);
                fila.push(y);
                prioridade.push(y);
            } else {
                if(pilha.top() != y)
                    eh_pilha = false;
                if(fila.front() != y)
                    eh_fila = false;
                if(prioridade.top() != y)
                    eh_prioridade = false;
                pilha.pop();
                fila.pop();
                prioridade.pop();
            }
        }

        if((eh_fila + eh_pilha + eh_prioridade) >= 2)
            cout << "not sure" << endl;
        else if((eh_fila + eh_pilha + eh_prioridade) == 0)
            cout << "impossible" << endl;
        else if(eh_fila)
            cout << "queue" << endl;
        else if(eh_pilha)
            cout << "stack" << endl;
        else 
            cout << "priority queue" << endl;
    }

    return 0;
}