#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    /*int a = 10;
    int *p;
    p = &a;


    cout<<a<<endl;
    printf("using pointer %d",*p);
    introduction to pointer */

    /*int A[5] = {2, 4, 6, 8, 10};  //stack
    int *p;
    p = A;

    for(int i =0; i < 5; i++){
        cout<<p[i]<<endl;
    }
    */ 
   //pointer and array introduction

    //c code for creation an array in heap
    /*int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 10; p[1] = 12; p[2] = 0; p[3] = 122; p[4] =-14;

    for(int i =0; i < 5; i++){
        cout<<p[i]<<endl;
    }
    free(p)*/

    //c++ code for creation of an array in heap ]

    /*int *p;
    p = new int[5];
    p[0] = 10; p[1] = 12; p[2] = 0; p[3] = 122; p[4] =-14;

    for(int i =0; i < 5; i++){
        cout<<p[i]<<endl;
    }

    delete [ ] p; //release the memory 
    */




    return 0;
}