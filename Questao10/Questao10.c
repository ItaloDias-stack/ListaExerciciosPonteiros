#include <stdio.h>

int main(void){
    int mat[4] = {1,2,3,4};
    char matChar[4]={'a','b','c','d'};
    float matFloat[4] = {1.1,2.1,3.1,4.1};
    double matDouble[4] = {1.1,2.1,3.1,4.1}; 

    printf("char: %x , %x, %x \n", matChar+1,matChar+2,matChar+3);
    printf("int: %x , %x, %x \n",mat+1,mat+2,mat+3);;
    printf("float: %x , %x, %x \n",matFloat+1,matFloat+2,matFloat+3);
    printf("double: %x , %x, %x \n",matDouble+1,matDouble+2,matDouble+3);
    return 0;
}