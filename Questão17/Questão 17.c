#include <stdio.h>
#include <stdlib.h>


void soma(float *vetor,float *vetor2, float *vetorsoma, size_t tamanho);
void imprimir(float *vetor,size_t tamanho);

int main() {
    float *vetor,*vetor2,*vetorsoma;
    int tam;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    
    vetor=malloc(tam*sizeof(float));
    vetor2=malloc(tam*sizeof(float));
    vetorsoma=malloc(tam*sizeof(float));
    
    printf("Digite valores para o primeiro vetor: ");
    for(int i=0;i<tam;i++){
    	scanf("%f",&vetor[i]);
	}
	
	printf("Digite valores para o segundo vetor: ");
    for(int i=0;i<tam;i++){
    	scanf("%f",&vetor2[i]);
	}
	
	soma(vetor,vetor2,vetorsoma,tam);
	imprimir(vetorsoma,tam);
	
	free(vetor);
	free(vetor2);
	free(vetorsoma);
    return 0;
}

void soma(float *vetor,float *vetor2, float *vetorsoma, size_t tamanho){
	for(int i=0;i<tamanho;i++){
    	vetorsoma[i]=vetor[i]+vetor2[i];
	}
}


void imprimir(float *vetor,size_t tamanho){
	for (int i=0;i<tamanho;i++){
		printf("\n%f",vetor[i]);
	}
}

