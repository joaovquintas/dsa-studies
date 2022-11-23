#include <iostream>
#include <stdio.h> 

using namespace std;

int area(int len, int br){
    
    return len*br; 
}

int perimeter(int len, int br){
    int p; 
    p = 2*(len+br);
    return p;
}

int main(){

    int len = 0, br = 0;

    printf("Enter length and breadth");
    cin>>len>>br;

    int a = area(len, br);
    int peri = perimeter(len, br);
 
    printf("Area: %d\nPerimeter:%d", a, peri);

    return 0; 
}