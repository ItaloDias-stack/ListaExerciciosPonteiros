#include <stdio.h>
#include <stdlib.h>

int ordena(const void* x, const void* y)
{
    return *(int*)x - *(int*)y;
}

int main(int argc, char *argv[]) 
{
    float *vetor[100]; //declaração da variavel do vetor
    int tam; //declaração da variavel para alocar o tamanho desejado
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);//recebe o tamanho do vetor
 	printf("Digite valores para este vetor: ");
    
    for(int i=0;i<tam;i++){ //recebe os valores do vetor
    	scanf("%f",&vetor[i]);
	}
    qsort(vetor, tam, sizeof(float), ordena);

    for(int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    return 0;
}

