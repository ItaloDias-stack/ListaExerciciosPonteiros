#include <stdio.h>

int main(){
    int i=5,*p;
    p=&i;
    printf("p: %x \n*p+2: %d \n**&p: %d \n3**p: %d \n**&p+4: %d \n",p,*p+2,**&p,3**p,**&p+4);
    return 0;
}