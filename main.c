#include "g.c"

int main(){
    int matriz[maxVert][maxVert];
    int n;

    lerMatriz(matriz, &n);
    printArestas(matriz, n);
    printf("É um digrafo? %s\n", Digrafo(matriz, n) ? "Sim" : "Não");
    calcGrau(matriz, n);
    printf("É um grafo conexo? %s\n", Conexo(matriz, n) ? "Sim" : "Não");
    verCiclo(matriz,n);
    printListaAdjacencias(matriz,n);

    return 0;
}