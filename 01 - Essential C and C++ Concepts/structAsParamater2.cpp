#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{

    int length;
    int breadth;

};

struct Rectangle *fun(){

    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //heap

    (*p).length = 15;
    (*p).breadth = 10;

    return p;
}


int main(){


    struct Rectangle *ptr = fun();

    cout<<"Len: "<<(*ptr).length<<endl<<"Breadth "<<(*ptr).breadth<<endl;
    return 0;
}