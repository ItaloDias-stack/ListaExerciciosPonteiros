#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p,*q;
    p=&i;
    q=&j;

    printf("p==&i: %c \n", p==&i? 't' : 'f' );
    printf("*p - *q : %d \n", *p - *q );
    printf("**&p: %d \n", **&p );
    float f = 3 - *p/(*q) +7 ;
    printf("3 - *p/(*q) +7 : %.2f \n", f  );
    return 0;
}