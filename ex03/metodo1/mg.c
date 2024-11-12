#include <stdio.h>
#include <stdlib.h>
#define maxVert 100

void lerMatrizPonderada(int matriz[maxVert][maxVert], int *n){
    printf("Digite o número de vértices: ");
    scanf("%d", n);
    printf("Digite a matriz de adjacências (use 0 para indicar ausência de aresta):\n");
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
           scanf("%d", &matriz[i][j]);}
    }
}
void printArestasComPesos(int matriz[maxVert][maxVert], int n){
    printf("Arestas e seus pesos:\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ 
            if(matriz[i][j]!= 0){
                printf("(%d, %d) com peso %d\n", i, j, 
                matriz[i][j]);}
        }
    }
}