#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int N, aux, derrotas = 0;
    char batalha[1000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {

        scanf("%s", batalha);
        aux = strlen(batalha);
        for(int j = 0; j < aux - 1; j++) {

            if(batalha[j] == 'C' && batalha[j + 1] == 'D') {

                derrotas++;
                break;

            }
        }    
    }
    printf("%d\n", N - derrotas);

    return 0;
}