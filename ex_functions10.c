#include <stdio.h>


/*10) Escreva uma função que calcula e devolve a média dos elementos de um vetor de inteiros recebido 
como parâmetro.*/

double calcula_media (int v[], int n ){ //v[]== parametro 
    double soma = 0;
    int i;

    for ( i = 0; i < n; i++){
        soma += v[i];
        //soma = soma + v[i];
    }
    return soma / n ;
    
}



int main (){
    int v[4]; // v = v é um ponteiro que indica o local inicial do vetor 
    double media = calcula_media (v,14);  // a pasagem é por cópia  de v[] para v 
    printf ("\n %.2f", media); 
    return 0 ;
}