#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    string S;

    while(cin >> S) {
        vector<int> letras(26, 0);
        for(char c: S)
            letras[c - 'a']++;

        string meio = "";

        for(int i = 0; i < 26; i++) {
            if(letras[i] % 2 != 0)
                meio.push_back(i + 'a');
        }

        int qtd = meio.size() == 0? 0: meio.size() - 1;

        cout << qtd << endl;
    }


    return 0;
}