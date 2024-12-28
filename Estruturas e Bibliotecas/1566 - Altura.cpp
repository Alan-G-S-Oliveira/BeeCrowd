#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int NC, N;

    cin >> NC;
    cin.ignore();

    for(int i = 0; i < NC; i++) {
        cin >> N;
        cin.ignore();
        
        vector<int> alturas(N);
        for(int j = 0; j < N; j++) 
            cin >> alturas[j];

        sort(alturas.begin(), alturas.end());

        bool espaco = false;
        for(int j: alturas) {
            if(espaco)
                cout << " ";
            else
                espaco = true;
            
            cout << j;
        }
        cout << endl;
    }

    return 0;
}