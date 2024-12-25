#include <iostream>
#include <stack>

using namespace std;

int main() {

    int N, aux;

    while(true) {
        cin >> N;
        cin.ignore();
        if(N == 0)
            break;
        
        while(true) {
            int cont = 1;
            stack<int> pilha;
            bool valido = true;

            for(int i = 0; i < N; i++){
                cin >> aux;
                cin.ignore();

                if(aux == 0)
                    break;

                while(cont <= aux) {
                    pilha.push(cont);
                    cont++;
                }
                int atual = pilha.top();
                pilha.pop();
                if(atual != aux)
                    valido = false;
            }
            if(aux == 0) {
                cout << endl;
                break;
            } else if(valido)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}