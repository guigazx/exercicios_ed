/*
13) Escreva uma função que recebe um vetor de char v e um char c. A função deve
substituir cada ocorrência de c em v por *
*/


int decorenciaC_em_V ( char v[] ,int  Nv , char c , int Nc ){
    int i , j ;
    char aux ;
    for (i=0 ; i < Nv; i++ ){
        for ( j = 0; j < Nc; j++){
            if (v[i] == c[*j] ){
                v[*i] = "*" ;
            }
            
        } // falata terminar 
        
        

    }
    for ( i = 0; i < Nv; i++){
        printf(" %s \n",v[i]);
    }    

    return 0;

}