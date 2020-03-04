/*
11) Escreva uma função que recebe um vetor de inteiros e inverte seu conteúdo. Por
exemplo, o vetor 1, 2, 3, 4 deve ser invertido para 4, 3, 2, 1.
*/



double copia_vetor(int v[], int n ){ // paramentro = v[] / n = numero maximo 
    int vet_axu[n]; 
    int j=0,i ;

    for ( i = n; i >= 0; i--){
        vet_axu[j] = v[n];
        j++;
    }
    for ( i = 0; i < n ; i++){
        v[i] = vet_axu[i];
    }

    for ( i = 0; i < n; i++){
        printf(" %d \n",vet_axu[i]);
    }
    
    return 1;
    
}


int intervet_vetor01 (int v[], int n ){ // troca pelo proximo 1 por 1 
    int i,j,aux;

    for ( i = 0; i < n; i++){
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        aux = '*';
    }
    for ( i = 0; i < n; i++){
        printf(" %d \n",v[i]);
    }
    return 1 ;

}

int intervet_vetor02 (int v[], int n ){ // troca por endereçõs de posições 
    int i,j,aux;

    for ( i = 0; i < n; i++){
    j = n -i -1;
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
    }
    for ( i = 0; i < n; i++){
        printf(" %d \n",v[i]);
    }

    return 1 ;   

}