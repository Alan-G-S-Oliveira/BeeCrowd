#include <iostream>

using namespace std;

bool divisivel(string ano, int num) {

    int resto = 0;
    for(char c: ano)
        resto = (resto * 10 + (c - '0')) % num;
    
    return resto == 0;
}

int main() {

    string ano;
    bool espaco = false;

    while(cin >> ano) {
        cin.ignore();

        bool bissexto, bulukulu, huluculu;

        if(espaco)
            cout << endl;
        else
            espaco = true;

        bissexto = divisivel(ano, 4) && (!divisivel(ano, 100) || divisivel(ano, 400));
        huluculu = divisivel(ano, 15);
        bulukulu = bissexto && divisivel(ano, 55);

        if(bissexto)
            cout << "This is leap year." << endl;
        if(huluculu) 
            cout << "This is huluculu festival year." << endl;
        if(bulukulu)
            cout << "This is bulukulu festival year." << endl;
        if(!bissexto && !huluculu && !bulukulu)
            cout << "This is an ordinary year." << endl;

    }

    return 0;
}