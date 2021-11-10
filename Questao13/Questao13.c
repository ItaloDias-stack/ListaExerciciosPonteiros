#include <stdio.h>
#include <stdlib.h>

int compareTo(const void * a, const void * b){
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

int main(void){
    int n;
    printf("Digite um número para n: ");
    scanf("%d",&n);
    float *val = malloc(n*sizeof(float));
    for (int i = 0; i < n; i++){
        printf("\nDigite o %dº valor do vetor: ",i+1);
        scanf("%f",&val[i]);
    }
    qsort (val, n, sizeof(float), compareTo);
    printf("Valores digitados em ordem crescente: ");
    for (int i = 0; i < n; i++){
        printf("%.2f ",val[i]);
    }
    printf("\n");
    free(val);
    return 0;
}