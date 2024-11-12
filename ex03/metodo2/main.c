#include "mg.c"

int main(){
    int matriz[maxVert][maxVert];
    int n;
    const char *nomeArquivo = "matriz.txt";
    lerMatrizPonderada(matriz, &n, nomeArquivo);
    printArestasComPesos(matriz, n);

    return 0;
}
