#include <stdio.h>
#include <stdlib.h>


void ordenar(float *vetor, size_t tamanho);
void imprimir(float *vetor,size_t tamanho);

int main() {
    float *vetor;
    int tam;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    vetor=malloc(tam*sizeof(float));
    printf("Digite valores para este vetor: ");
    
    for(int i=0;i<tam;i++){
    	scanf("%f",&vetor[i]);
	}
	
	ordenar(vetor, tam);
	imprimir(vetor,tam);
	
	free(vetor);
    return 0;
}


void ordenar(float *vetor, size_t tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[i] > vetor[j]) {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    
	
}
void imprimir(float *vetor,size_t tamanho){
	for (int i=0;i<tamanho;i++){
		printf("\n%f",vetor[i]);
	}
}

