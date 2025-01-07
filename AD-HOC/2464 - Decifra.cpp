#include <iostream>

using namespace std;

int main() {

    string criptografia, frase;
    string saida;

    cin >> criptografia;
    cin >> frase;

    for(char c: frase)
        saida.push_back(criptografia[c - 'a']);
    
    cout << saida << endl;

    return 0;
}