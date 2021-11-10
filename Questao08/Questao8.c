#include <stdio.h>

int main(void){
    int vet[] = {4,9,13};
    for(int i=0; i<3;i++){
        printf("%x ",vet+i);
    }
    return 0;
}