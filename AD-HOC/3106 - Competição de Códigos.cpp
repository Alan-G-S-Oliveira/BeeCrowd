#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N, soma = 0;
    string S, aux;

    cin >> N;
    cin.ignore();
    getline(cin, S);

    istringstream ss(S);
    while(ss >> aux)
        soma += stoi(aux) / 3; 

    cout << soma * 3 << endl;

    return 0;
}