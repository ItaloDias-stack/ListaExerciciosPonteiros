#include <stdio.h>
#include <stdlib.h>

void multiplica(int **MatrizA,int **MatrizB, int **MatrizC,size_t la,size_t ca,size_t lb);
void imprimir(int **MatrizA,int **MatrizB, int **MatrizC, size_t la,size_t cb);


int main() {
    int **MatrizA,**MatrizB,**MatrizC;
    int la,ca,lb,cb;
    
    printf("Digite o numero de linhas da matriz A: ");
    scanf("%d",&la);
    printf("Digite o numero de colunas da matriz A: ");
    scanf("%d",&ca);
    printf("Digite o numero de linhas da matriz B: ");
    scanf("%d",&lb);
    printf("Digite o numero de colunas da matriz B: ");
    scanf("%d",&cb);
    
    MatrizA = malloc(la*sizeof(int*));
    for(int i=0;i<la;i++){
    	MatrizA[i]= malloc(ca*sizeof(int));
	}
	MatrizB = malloc(lb*sizeof(int*));
    for(int i=0;i<lb;i++){
    	MatrizB[i]= malloc(cb*sizeof(int));
	}
	MatrizC = malloc(la*sizeof(int*));
    for(int i=0;i<la;i++){
    	MatrizA[i]= malloc(cb*sizeof(int));
	}
	
	
    printf("Digite valores para a MatrizA: ");
    for (int i = 0; i < la; i++){
        for (int j = 0; j < ca; j++){
            scanf("%d", &MatrizA[i][j]);
        }
    }
    printf("Digite valores para a MatrizB: ");
    for (int i = 0; i < lb; i++){
        for (int j = 0; j < cb; j++){
            scanf("%d", &MatrizB[i][j]);
        }
    }
    
    multiplica(MatrizA,MatrizB,MatrizC,la,ca,lb);
    imprimir(MatrizA,MatrizB,MatrizC,la,cb);
  
  	for(int i=0;i<la;i++){
  		free(MatrizA[i]);
	}
	free(MatrizA);
	for(int i=0;i<lb;i++){
  		free(MatrizB[i]);
	}
	free(MatrizB);
	
	for(int i=0;i<la;i++){
  		free(MatrizC[i]);
	}
	free(MatrizC);
  
  
  
  
	return 0;	
}

void multiplica(int **MatrizA,int **MatrizB, int **MatrizC, size_t la, size_t ca, size_t lb){
	for(int i=0; i<la ;i++){
        for(int j=0; j<lb; i++){
        MatrizC[i][j] = (MatrizA[i][j])*(MatrizB[i][j]);
        }
    }
}
            
void imprimir(int **MatrizA,int **MatrizB, int **MatrizC, size_t la,size_t cb){
	printf("Matriz A: ");
	for (int i = 0; i < la; i++){
        for (int j = 0; j < cb; j++){
            printf("%d ", MatrizA[i][j]);
        }
        printf("\n");
    }
	printf("Matriz B: ");
	for (int i = 0; i < la; i++){
	        for (int j = 0; j < cb; j++){
	            printf("%d ", MatrizA[i][j]);
	        }
	        printf("\n");
	    }
	printf("Matriz C: ");
	for (int i = 0; i < la; i++){
        for (int j = 0; j < cb; j++){
            printf("%d ", MatrizC[i][j]);
        }
        printf("\n");
    }
}
