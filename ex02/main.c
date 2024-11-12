#include "m.c"

int main(){
    int matriz[maxVert][maxVert];
    int n;
    printf("Digite o número de vértices: ");
    scanf("%d", &n);
    if(n<=0||n>maxVert){
        printf("Número de vértices inválido! \nTem que estar entre 1 e %d.\n", maxVert);
        return 1; }
    MatrizCompleta(matriz, n);
    MatrizAdjacencias(matriz, n);
    printListaAdjacencias(matriz, n);
    return 0;
}