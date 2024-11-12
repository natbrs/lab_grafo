#include <stdio.h>
#include <stdlib.h>

#define maxVert 100

void lerTriangularInferior(int matriz[maxVert][maxVert], int *n){
    printf("Digite o número de vértices: ");
    scanf("%d", n);

    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
          matriz[i][j] = 0;
        }
    }
    printf("Digite a matriz triangular inferior:\n");
    for(int i=1;i<*n;i++){
        for(int j=0;j<i;j++){
            char ch;
            scanf(" %c", &ch); 
            matriz[i][j]=ch-'0';
            matriz[j][i]=matriz[i][j];
        }
    }
}
void printMatrizCompleta(int matriz[maxVert][maxVert], int n){
    printf("Matriz de adjacências completa:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ", matriz[i][j]);
        } printf("\n");
    }
}
