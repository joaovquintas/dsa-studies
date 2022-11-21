#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int len;
    int bread;
};

int main(){

    /*struct Rectangle r={10,5};
    cout<<r.len<<endl;
    cout<<r.bread<<endl;

    struct Rectangle *p = &r;
    cout<<(*p).len<<endl;
    cout<<(*p).bread<<endl;*/

    struct Rectangle *p;
    //in C p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    //C++

    p = new Rectangle;
    p->len = 12;
    p->bread = 2;
    
    cout<<(*p).len<<endl;
    cout<<(*p).bread<<endl;


    return 0;
}