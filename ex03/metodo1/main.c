#include "mg.c"

int main(){
    int matriz[maxVert][maxVert];
    int n;
    lerMatrizPonderada(matriz, &n);
    printArestasComPesos(matriz, n);

    return 0;
}
