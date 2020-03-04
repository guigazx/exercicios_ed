/*
14) Escreva uma função que recebe um vetor de inteiros e decide se ele está ordenado
de forma decrescente.
*/


int verifica_ordenacao( int v[],int n ){
    int i , j;
    
    for ( i = 0; i < n; i++){
        j = i+1;
        
        if (j >= n){
            j= n;
        }

        if (v[i] < v[j] ){
            printf(" não está ordenado \n ");
            return 0 ;
        }
    }
    printf ("está ordenado \n ");
    return 1 ;
    

}