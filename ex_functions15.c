
/*15) Escreva uma função que recebe três vetores A, B e C. Ao final de seu processamento, o vetor C 
deve conter os elementos da união de A e B, sem repetições.*/


# include <stdio.h>


int contem( int v [] , int n, int e){ // vetor, tamanho, elemento 
    int i;
    for ( i = 0; i < n; i++){
        if ( v[i] == e )
            return 1; // 1 = verdade ou !!0  !0  qualquer coisa diferente de 0
        
    }
    return 0 ; 
    
}


int calcula_vetor_c (int A [] ,int nA, int B[] ,int nB, int C [], int nC){
    //Fvaredura no vetor A comparanado com o vetor C 
    int qtdeC = 0;
    int i;

    for ( i = 0; i < nA; i++){
        if (!contem (C , nA , A[i]))
            C[qtdeC++] = A[i]; 
    }
    for ( i = 0; i < nB; i++){
        if (!contem (C , nB , B[i]))
            C[qtdeC++] = B[i]; 
    }    

    return qtdeC ; 

}




int main () {

    int v1[] = {1,2,4,3,1};
    int v2[] = {1,1,1,1,2};
    int C[10] ; 

    int qtdeC = calcula_vetor_c (v1 , 5 , v2 , 5 , C , 10);
    int i;
    for ( i = 0; i < qtdeC ; i++){
        printf("\n %d " , C[i]);
    }
    



    return 0 ;
}
