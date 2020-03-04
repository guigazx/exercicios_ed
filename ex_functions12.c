/*
12) Escreva uma função que decide 
se há elementos iguais em um vetor de reais.
*/

float elementos_iguais(float v [] , int n ){
    float aux;
    int i ,j ;

    for ( i = 0; i < n; i++){
        aux = v[i];
        for ( j = 1; j < n-1; j++){
            if (aux == v[j]){
                printf(" ha elementos iguais  %d \n",aux);
                return 0 ; 
            }
        }
        
        
    }
    printf(" nao ha elementos iguais ");
    return 1;
    



    return 0;
}