#include <iostream>
#include <stack>

using namespace std;

int main() {

    string N;
    while(cin >> N) {
        cin.ignore();
        stack<char> pilha;
        bool correto = true;
        for(char i: N) {
            if(i == '(')
                pilha.push(i);
            else if(i == ')') {
                if(pilha.empty()) {
                    correto = false;
                    break;
                } else
                    pilha.pop();
            }
        }
        cout << (correto && pilha.empty()? "correct": "incorrect") << endl;
    }

    return 0;
}