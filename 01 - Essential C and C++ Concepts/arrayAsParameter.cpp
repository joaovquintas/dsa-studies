#include <iostream>

using namespace std;

void fun(int A[], int n){
    
    for(int i = 0;i < 5; i++)
        cout<<A[i]<<endl;
}

void fun1(int *A, int n){ //by adress
    A[0] = 55;
}

int * fun2(int size){

    int *p; 
    p = (int *)malloc(size*sizeof(int));

    for(int i = 0; i < size; i++)
        p[i]= i + 1;

    return p;
} //return an array using pointers directly.


int main(){

    int *ptr, sz = 10;

    ptr = fun2(sz);

    for(int i = 0; i < sz; i++)
        cout<<ptr[i]<<endl;
    return 0;
}