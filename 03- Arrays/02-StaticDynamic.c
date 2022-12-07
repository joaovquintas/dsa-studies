#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[5]={2,3,4,5,6}; //stack 

    int *p; //pointer in stack to acess the array created in heap

    p = (int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 4;
    p[2] = 5;
    p[3] = 112;
    p[4] = 123;

    for(int i = 0; i < 5; i++)
        printf("%d ", A[i]);
    
    printf("\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    return 0;
}