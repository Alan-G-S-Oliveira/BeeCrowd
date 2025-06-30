#include <iostream>

using namespace std;

struct no {
    char chave;
    no *esq = nullptr;
    no *dir = nullptr;
};

void insere(no **raiz, char n) {
    if(*raiz == nullptr) {
        *raiz = new no;
        (*raiz) -> chave = n; 

        return;
    }

    no *aux, *pai;
    aux = *raiz;
    while(aux != nullptr) {
        pai = aux;
        if(aux -> chave > n)
            aux = aux -> esq;
        else
            aux = aux -> dir;
    }

    no *novo = new no;
    novo -> chave = n;

    if(n < pai -> chave)
        pai -> esq = novo;
    else
        pai -> dir = novo;
}

void prefixa(no *raiz, bool &primeiro) {
    if(raiz == nullptr)
        return;

    if(primeiro)
        primeiro = false;
    else
        cout << ' ';
    cout << raiz -> chave;
    prefixa(raiz -> esq, primeiro);
    prefixa(raiz -> dir, primeiro);
}

void infixa(no *raiz, bool &primeiro) {
    if(raiz == nullptr)
        return;
    infixa(raiz -> esq, primeiro);
    if(primeiro)
        primeiro = false;
    else
        cout << ' ';
    cout << raiz -> chave;
    infixa(raiz -> dir, primeiro);
}


void posfixa(no *raiz, bool &primeiro) {
    if(raiz == nullptr)
        return;
    posfixa(raiz -> esq, primeiro);
    posfixa(raiz -> dir, primeiro);
    if(primeiro)
        primeiro = false;
    else
        cout << ' ';
    cout << raiz -> chave;
}

void busca(no *raiz, char n) {
    no *aux = raiz;

    while(aux != nullptr) {
        if(aux -> chave == n) {
            cout << n << " existe\n";
            return;
        } else if(aux -> chave > n)
            aux = aux -> esq;
        else
            aux = aux -> dir;
    }

    cout << n << " nao existe\n";
}

void apaga(no **raiz) {
    if(*raiz != nullptr) {
        apaga(&((*raiz)) -> esq);
        apaga(&((*raiz)) -> dir);
    }

    delete *raiz;
    *raiz = nullptr;
}

int main() {

    string S;
    no **arvore = new no*;

    while(getline(cin, S)) {
        if(S == "INFIXA") {
            bool teste = true;
            infixa(*arvore, teste);
            cout << endl;
        } else if(S == "PREFIXA") {
            bool teste = true;
            prefixa(*arvore, teste);
            cout << endl;
        } else if(S == "POSFIXA") {
            bool teste = true;
            posfixa(*arvore, teste);
            cout << endl;
        } else {
            if(S[0] == 'P')
                busca(*arvore, S[2]);
            else
                insere(arvore, S[2]);
        }
    }

    apaga(arvore);
    delete *arvore;

    return 0;
}