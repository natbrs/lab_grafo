#include <stdio.h>
#include <stdlib.h>

#define maxVert 100

void lerTriangularInferior(int matriz[maxVert][maxVert], int *n, const char *nArquivo){
    FILE*arquivo=fopen(nArquivo, "r");
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    } fscanf(arquivo, "%d", n);
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
            matriz[i][j]=0;}
    }
    for(int i=1;i<*n;i++){
        for(int j=0;j<i;j++){
            char ch;
            fscanf(arquivo, " %c", &ch);
            matriz[i][j]=ch-'0';
            matriz[j][i]=matriz[i][j];
        }
    } fclose(arquivo);
}
void printMatrizCompleta(int matriz[maxVert][maxVert], int n){
    printf("Matriz de adjacências completa:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ", matriz[i][j]);
        } printf("\n");
    }
}
