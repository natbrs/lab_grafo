#include <stdio.h>
#include <stdlib.h>

#define maxVert 100

void lerMatriz(int matriz[maxVert][maxVert], int *n){
  printf("Digite o numero de vertices: ");
  scanf("%d", n);
  printf("Digite a matriz de adjacencias:\n");
  for(int i=0;i<*n; i++){
    for(int j=0;j<*n; j++){ 
        scanf("%d", &matriz[i][j]);
    }
  }
}
void printArestas(int matriz[maxVert][maxVert], int n){
      printf("Arestas do grafo:");
      for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(matriz[i][j]==1){
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}

int Digrafo(int matriz[maxVert][maxVert], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matriz[i][j]!=matriz[j][i]){
                return 1;
            }
        }
    }
    return 0;
}
void calcGrau(int matriz[maxVert][maxVert], int n){
    printf("Grau de cada vertice:\n");
    for(int i=0;i<n;i++){
        int grau=0;
        for (int j=0; j<n; j++){
            grau+=matriz[i][j];
        }
        printf("Grau do vertice %d: %d\n", i,grau);
    }
}

int Conexo(int matriz[maxVert][maxVert], int n){
    int visitado[maxVert]={0};
    int fila[maxVert],inicio=0,fim=0;
    visitado[0]=1;
    fila[fim++]=0;
    while(inicio<fim){
        int v = fila[inicio++];
        for(int i=0; i<n; i++){
            if(matriz[v][i] == 1 && !visitado[i]){
                visitado[i] = 1;
                fila[fim++] = i;
            }
        }
    } for(int i=0; i<n; i++){
        if(!visitado[i]){
            return 0;
        }
    } return 1;
}

int Ciclico(int matriz[maxVert][maxVert], int n, int visitado[], int v, int parent){
    visitado[v]=1;
    for(int i=0;i<n; i++){
        if(matriz[v][i]){
            if(!visitado[i]){
                if(Ciclico(matriz, n, visitado, i, v)){
                    return 1;
                }
            }else if(i!=parent){
                return 1;
            }
        }
    }
    return 0;
}

void verCiclo(int matriz[maxVert][maxVert], int n){
    int visitado[maxVert]={0};
    if(Ciclico(matriz, n, visitado, 0, -1)){
        printf("O grafo é ciclico\n");
    }
    else{
        printf("O grafo é aciclico.\n");
    }
}

void printListaAdjacencias(int matriz[maxVert][maxVert], int n){
    printf("Lista de adjacencias:\n");
    for(int i=0; i<n; i++){
        printf("%d: ", i);
        int first = 1;
        for(int j=0; j<n; j++){
            if(matriz[i][j]==1){
                if (!first) printf(", ");
                printf("%d", j);
                first=0;
            }
        }printf("\n");
    }
}