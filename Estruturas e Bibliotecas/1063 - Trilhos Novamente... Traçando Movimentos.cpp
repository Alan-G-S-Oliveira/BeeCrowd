#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

    int N;

    while(cin >> N && N != 0) {

        vector<char> entrar(N), sair(N);
        stack<char> estacao;
        string saida;

        for(int i = 0; i < N; i++)
            cin >> entrar[i];

        for(int i = 0; i < N; i++)
            cin >> sair[i];

        int cont = 0, i = 0;

        while(i < N) {
            if(!estacao.empty() && estacao.top() == sair[i]) {
                estacao.pop();
                saida.push_back('R');
                i++;
            } else if(cont < N) {
                estacao.push(entrar[cont++]);
                saida.push_back('I'); 
            } else {
                break; 
            }
        }

        cout << saida << (estacao.empty()? "": " Impossible") << endl;
    }

    return 0;
}
