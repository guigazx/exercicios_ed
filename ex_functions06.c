/*6) Escreva uma função que recebe um inteiro (1, 2 ou 3) que representa um mês do
primeiro trimestre. A função deve exibir o mês representado ou a mensagem “valor
inválido” caso o valor seja diferente de 1, 2 e 3.*/

#include <stdio.h>
#include<stdlib.h>


void v_mes (int i){
    int x = i ; 

    if ( x > 3 || x < 1){
        printf (" valor inválido  ");
        return 0 ;
    }
    else 
        return x;

}