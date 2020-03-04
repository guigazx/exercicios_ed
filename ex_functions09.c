/*
9) Escreva uma função que recebe um caractere como parâmetro e decide se se trata de
uma vogal.
*/


#include <stdio.h>

int  verifica_vogal (char x){
    char letra[1];
    letra[0] = x;

    switch ( letra[0] ){ // posso usar o proprio x 
    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf(" é uma vogal ");
        return 1; //verdade
        
    
    default:
        printf ("é uma consoante") ; 
        return 0 ; // mentira
        
    }

}

