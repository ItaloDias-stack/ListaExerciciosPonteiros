#include <stdio.h>
#include <stdlib.h>

void imprimir(float *vetor,size_t tamanho);
int ordena(const void* x,const void *y);

int main(){
	float *vetor; //declaração da variavel do vetor
    int tam; //declaração da variavel para alocar o tamanho desejado
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);//recebe o tamanho do vetor
    vetor=malloc(tam*sizeof(float));
    printf("Digite valores para este vetor: ");
    
    for(int i=0;i<tam;i++){ //recebe os valores do vetor
    	scanf("%f",&vetor[i]);
	}
	qsort(vetor,tam,sizeof(float),ordena);//chamada da função qsort passando o vetor,quantidade de elementos,o tamanho e o nome da função
	imprimir(vetor,tam);//função para imprimir o vetor;
	
	free(vetor);
    return 0;
}
	
void imprimir(float *vetor,size_t tamanho){
	for (int i=0;i<tamanho;i++){//passa por todas as posições do vetor e posteriormente tem a saida de dados
		printf("\n%f",vetor[i]);
	}
}

int ordena(const void* x,const void *y){//função para ordenar
	if (*(int*)x == *(int*)y)
		return 0;//valor igual significa a=b
	else
		if(*(int*)x<*(int*)y)
			return -1;//o valor a vem antes de b
		else
			return 1;//o valor b vem antes do a
}
