/*5) Altere o exercício 4 escrevendo uma função que garante que 
dois valores digitados pelo usuário são diferentes.*/


#include <stdio.h>
#include<stdlib.h>

int achar_maior (int a , int b){
    return a > b ? a : b;
}

int verifica_igualdade (int a ,int b){
    if ( a == b )
        return 1; // verdade
    else
    {
        return 0;
    }
    

}

int main (){

    int x,y;

    printf("valor 01 = ") && scanf (" %d \n", &x);
    printf("valor 02 = ") && scanf (" %d \n", &y);

    int j = verifica_igualdade (x , y );
    
   

    while ( j == 1   ){
        printf("digite outros valores \n");
        printf("outro 01");
        scanf (" %d \n", &x);

        printf("outro 02");
        scanf (" %d \n", &y); 
        j = verifica_igualdade (x , y ); // falta encontar o porque ele pede mais 1 digito 
    }


    int r = achar_maior ( x , y );
    printf("\n Maior  %d ", r);
    return 0;
}

