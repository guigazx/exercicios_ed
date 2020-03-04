/*8) Escreva uma função que decide se um número é primo.*/

#include<stdio.h>
#include<stdlib.h>


int calcula_primo ( int x){
    int i; // contador 
    int y=0; // acumulador 

    for (i = 2 ; i <= x / 2 ;i++ ){
        if (x % i == 0)  
        y++;
        break;
    }

    if (  y == 0 ){
        printf(" o numero é primo \n");
        return 1 ;
    }
    else {
        printf (" o numero não é primo \n");
        return 0 ;
    }

}


int main (){
    calcula_primo (173);

    return 0;
}