/*
7) Escreva uma função que calcula o fatorial de um número recebido por parâmetro,
devolvendo-o ao final.
*/
#include <stdlib.h>
#include <stdio.h> 

int calcula_fatorial(int n){
    int x  = n;
    int fat;

    for ( fat = 1 ; n > 1 ; n--){
        fat = fat * n;
        printf("\n %d", fat);

    }

    printf("\n fatorial  de %d é %d " , x , fat);
    return 0;
}


