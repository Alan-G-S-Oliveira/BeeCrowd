#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N;

    while(cin >> N) {
        cin.ignore();
        if(N == 0)
            break;

        vector<string> conjunto(N);
        for(int i = 0; i < N; i++) {
            cin >> conjunto[i];
            cin.ignore();
        }

        sort(conjunto.begin(), conjunto.end());

        bool bom = true;
        for(int i = 0; i < N - 1; i++) {
            if(conjunto[i + 1].compare(0, conjunto[i].size(), conjunto[i]) == 0) {
                bom = false;
                break;
            }
        }
        
        if(bom)
            cout << "Conjunto Bom" << endl;
        else
            cout << "Conjunto Ruim" << endl;
    }

    return 0;
}