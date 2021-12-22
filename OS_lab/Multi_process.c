#include<ptrhead>
#include<stdio.h>
#define NUM_THREADS 5

int main() {
    int i, scope;
    ptrhead_t tid[NUM_THREADS];
    ptrhead_attr_init(attr);

    //Get the default attributes
    ptrhread_attr_init(&attr);

    //first inquire on the current scope
    if(ptrheaf_attr_getscope(&attr, &scope) != 0)
        fprintf(stderr, "Unable to get scheduling scope\n");
    else {
        if(scope == PTRHEAD_SCOPE_PROCESS)
            printf("PTR_SCOPE_PROCESS");
        else if(scope == PTR_HEA)
    }
}
