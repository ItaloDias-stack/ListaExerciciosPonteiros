#include <stdio.h>
#include <gc.h>

int main(void){

    GC_INIT();
    int* p = (int*)GC_MALLOC(sizeof(int));
    *p=100;
    printf("Heap size: %p\n",p);

    GC_FREE(p);
    return 0;
}