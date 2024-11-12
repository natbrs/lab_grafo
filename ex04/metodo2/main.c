#include "g.c"

int main(){
    int matriz[maxVert][maxVert];
    int n;
    const char *nArquivo="entrada.txt";
    lerTriangularInferior(matriz, &n, nArquivo);
    printMatrizCompleta(matriz, n);

    return 0;
}
