#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle{

public:
    int len;
    int br;

void initialise(int l, int b){
    len = l;
    br = b;
}

int area(){
    return len*br;

}

int perimeter(){

    int p;
    p = 2*(len+br);   
    return p; 
}

};

int main(){
    
    Rectangle r;

    int l,b;
    printf("enter len and br: \n");
    cin>>l>>b;

    r.initialise(l,b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area: %d\nPerimeter:%d", a, peri);

    return 0;
}



