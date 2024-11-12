#include "g.c"

int main() {
    int matriz[maxVert][maxVert];
    int n;
    lerTriangularInferior(matriz, &n);
    printMatrizCompleta(matriz, n);

    return 0;
}
