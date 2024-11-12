#include <stdio.h>
#include <stdlib.h>
#define maxVert 100

void lerMatrizPonderada(int matriz[maxVert][maxVert], int *n, const char *nArquivo){
    FILE*arquivo=fopen(nArquivo, "r");
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    } fscanf(arquivo, "%d", n);
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    } fclose(arquivo);
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