#include <stdio.h>
#include <stdlib.h>

#define maxVert 100

void MatrizCompleta(int matriz[maxVert][maxVert], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                matriz[i][j]=1;
            } else{
                matriz[i][j]=0; 
            }
        }
    }
}

void MatrizAdjacencias(int matriz[maxVert][maxVert], int n){
    printf("\nMatriz de Adjacências:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", matriz[i][j]);
        } printf("\n");
    }
}

void printListaAdjacencias(int matriz[maxVert][maxVert], int n){
    printf("\nLista de Adjacências:\n");
    for(int i=0;i<n;i++){
        printf("%d: ", i);
        for(int j=0;j<n;j++){
            if(matriz[i][j]==1){
                printf("%d ", j);}
        }printf("\n");
    }
}
