#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N, K;
    string aux, num;

    while(true) {
        cin >> N >> K;
        cin.ignore();

        if(N == K && K == 0)
            break;

        int hash[100] = {0};

        getline(cin, aux);

        istringstream ss(aux);
        while(ss >> num)
            hash[stoi(num) - 1]++;

        int cont = 0;
        for(int i: hash) {
            if(i >= K)
                cont++;
        }

        cout << cont << endl;

    }

    return 0;
}