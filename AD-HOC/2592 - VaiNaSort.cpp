#include <iostream>
#include <sstream>

using namespace std;

bool verifica(string str, int N) {

    istringstream ss(str);
    string atual, ant;
    int cont = 0, j = 0;
    
    while(ss >> atual) {
        
        if(j == 0)
            cont = 1;
        else {
            if(stoi(atual) > stoi(ant))
                cont++;
        }
        j++;
        ant = atual;
    }

    return cont == N;

}

int main() {

    int N;
    string aux;

    while(true) {
        cin >> N;
        if(N == 0)
            break;

        cin.ignore();

        int cont = 1;
        while(true) {

            getline(cin, aux);
            if(verifica(aux, N))
                break;
            else
                cont++;

        }
        cout << cont << endl;
    }

    return 0;
}