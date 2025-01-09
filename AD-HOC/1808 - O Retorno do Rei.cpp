#include <iostream>

using namespace std;

int main() {

    int total = 0;
    int qtd = 0;
    string  S;    

    cin >> S;

    int atual = S[0] - '0';
    unsigned int i = 1;
    while(i <= S.size()) {
        if(atual == 1 && S[i] == '0') {
            total += 10;
            i++;
        } else
            total += atual;

        atual = S[i] - '0';
        i++;
        qtd++;

    }

    cout.precision(2);
    cout << fixed;
    cout << static_cast<double>(total) / qtd << endl;

    return 0;
}