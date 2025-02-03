#include <iostream>

using namespace std;

int main() {

    string F;

    while(getline(cin, F)) {
        string saida = "";
        for(char c: F) {
            switch(c) {
                case '@':
                    saida.push_back('a');
                    break;
                case '&':
                    saida.push_back('e');
                    break;
                case '!':
                    saida.push_back('i');
                    break;
                case '*':
                    saida.push_back('o');
                    break;
                case('#'):
                    saida.push_back('u');
                    break;
                default:
                    saida.push_back(c);
                    break;
            }
        }

        cout << saida << endl;
    }

    return 0;
}