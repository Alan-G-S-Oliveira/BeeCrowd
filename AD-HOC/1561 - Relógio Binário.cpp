#include <iostream>
#include <sstream>

using namespace std;

string binario(int N) {
    if(N == 0)
        return "0";

    string saida = "";
    while(N > 0) {
        saida = (N % 2 == 0? "0": "1") + saida;
        N /= 2;
    }

    return saida;
}

string completa(string saida, unsigned int n) {
    for(unsigned int i = saida.size(); i < n; i++)
        saida = "0" + saida;

    return saida;
}

int main() {

    int H, M;
    char H_bin[4];
    char M_bin[6];

    string aux, num;
    
    while(cin >> aux) {
        istringstream ss(aux);
        
        getline(ss, num, ':');
        H = stoi(num);

        getline(ss, num);
        M = stoi(num);

        aux = completa(binario(H), 4);
        for(int i = 0; i < 4; i++)
            H_bin[i] = aux[i] == '0'? ' ': 'o';
        aux = completa(binario(M), 6);
        for(int i = 0; i < 6; i++)
            M_bin[i] = aux[i] == '0'? ' ': 'o';

        cout << " ____________________________________________\n";
        cout << "|                                            |\n";
        cout << "|    ____________________________________    |_\n";
        cout << "|   |                                    |   |_)\n";
        cout << "|   |   8         4         2         1  |   |\n";
        cout << "|   |                                    |   |\n";
        cout << "|   |   " << H_bin[0] << "         " << H_bin[1] << "         " << H_bin[2] << "         " << H_bin[3] << "  |   |\n";
        cout << "|   |                                    |   |\n";
        cout << "|   |                                    |   |\n";
        cout << "|   |   " << M_bin[0] << "     " << M_bin[1] << "     " << M_bin[2] << "     " << M_bin[3] << "     " << M_bin[4] << "     " << M_bin[5] << "  |   |\n";
        cout << "|   |                                    |   |\n";
        cout << "|   |   32    16    8     4     2     1  |   |_\n";
        cout << "|   |____________________________________|   |_)\n";
        cout << "|                                            |\n";
        cout << "|____________________________________________|\n\n";

    }

    return 0;
}