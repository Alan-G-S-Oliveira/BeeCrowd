#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> playlist;
    int M, K, aux;
    int *album;

    while(cin >> M >> K) {

        int soma = 0;

        album = new int[M];
        
        for(int i = 0; i < M; i++)
            cin >> album[i];

        for(int i = 0; i < K; i++) {
            cin >> aux;

            if((int)playlist.size() < M)
                soma += album[aux - 1];

            playlist.insert(aux);
        }

        cout << ((int)playlist.size() == M? soma: -1) << endl;

        playlist.clear();

        delete[] album;
    }

    return 0;
}