#include <iostream>

using namespace std;

int main() {

    int n, matricula;
    string curso;
    
    while(cin >> n) {
        cin.ignore();

        int EPR = 0, EHD = 0, intrusos = 0;
        for(int i = 0; i < n; i++) {
            cin >> matricula >> curso;
            if(curso == "EPR")
                EPR++;
            else if(curso == "EHD")
                EHD++;
            else
                intrusos++;
        }
        cout << "EPR: " << EPR << endl;
        cout << "EHD: " << EHD << endl;
        cout << "INTRUSOS: " << intrusos << endl;
    }

    return 0;
}