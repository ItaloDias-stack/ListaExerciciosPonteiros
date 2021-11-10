#include <stdio.h>

int soma(int a, int b){
    return a+b;
}
int subtrair(int a, int b){
    return a-b;
}
int multiplicacao(int a, int b){
    return a*b;
}

void mostraResultado(int (*f[])(int,int) ,int opcao,int a,int b){
    printf("resultado: %d \n",(*f[opcao])(a,b) );
}
int main(void){
    int (*array_ponteiros[])(int,int)={soma,subtrair,multiplicacao};
    int opcao,a,b;
    printf("Digite a opção desejada:\n1-Soma, 2-Subtração, 3-Multiplicação\n");
    scanf("%d",&opcao);
    if(opcao<4) {
        printf("\nDigite o valor de 'a': ");
        scanf("%d",&a);
        printf("\nDigite o valor de 'b': ");
        scanf("%d",&b);
    
        mostraResultado(array_ponteiros,opcao-1,a,b);
    }else{ 
        printf("\nOpção inválida\n");
    }
    return 0;
}