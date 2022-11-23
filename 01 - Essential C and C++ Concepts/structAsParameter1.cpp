#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{

    int length;
    int breadth;

};


void fun(struct Rectangle *p){

    p->length = 101;
    cout<<"Len: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;
}

int main(){

    struct Rectangle r = {10,5};
    fun(&r);

    printf("len: %d\nbread: %d\n", r.length, r.breadth);

    return 0;
}