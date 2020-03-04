#include<stdio.h>
#include<stdlib.h>

int achar_maior (int a , int b){
    return a > b ? a : b;
}

int main (){

    int x,y;
    
    scanf (" %d ", &x);
    scanf (" %d ", &y);

    int r = achar_maior ( x , y );
    printf("\n Maior  %d ", r);
    return 0;
}