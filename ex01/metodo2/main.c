#include "g.c"

int main() {
    int matriz[maxVert][maxVert];
    int n;
    lerMatriz(matriz, &n, "matriz.txt");
    printArestas(matriz, n);
    printf("É um dígrafo? %s\n", Digrafo(matriz, n) ? "Sim" : "Não");
    calcGrau(matriz, n);
    printf("É um grafo conexo? %s\n", Conexo(matriz, n) ? "Sim" : "Não");
    verCiclo(matriz, n);
    printListaAdjacencias(matriz, n);

    return 0;
}