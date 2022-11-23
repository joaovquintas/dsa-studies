#include <iostream> 
#include <stdio.h>

using namespace std; 

struct Rectangle{
    int len;
    int br; 
};

void initialise(struct Rectangle *r, int l, int b){
    r->len = l;
    r->br = b;
}

int area(struct Rectangle r){

    return r.len*r.br; 
}

int perimeter(Rectangle r){

    int p;
    p = 2*(r.len + r.br);

    return p;
}
 
int main(){

    Rectangle r={0,0};

    int l,b;
    printf("enter len and br: \n");
    cin>>l>>b;

    initialise(&r, l, b);
    
    int a = area(r);
    int peri = perimeter(r);
    
    printf("Area: %d\nPerimeter:%d", a, peri);

    return 0;
}