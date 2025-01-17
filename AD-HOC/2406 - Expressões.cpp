#include <iostream>
#include <stack>

using namespace std;

int main() {

    int T;
    string A;
    bool valido;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> A;

        stack<char> ultimo;
        valido = true;

        for(char c: A) {
            if(c == '(' || c == '[' || c == '{') {
                ultimo.push(c);
            } else {
                if(c == ')') {
                    if(!ultimo.empty() && ultimo.top() == '(')
                        ultimo.pop();
                    else {
                        valido = false;
                        break;
                    }
                } else if(c == ']') {
                    if(!ultimo.empty() && ultimo.top() == '[')
                        ultimo.pop();
                    else {
                        valido = false;
                        break;
                    }
                } else if(c == '}') {
                    if(!ultimo.empty() && ultimo.top() == '{')
                        ultimo.pop();
                    else {
                        valido = false;
                        break;
                    }
                }
            }
        }

        if(!ultimo.empty())
            valido = false;

        cout << (valido? 'S': 'N') << endl;
    }    

    return 0;
}