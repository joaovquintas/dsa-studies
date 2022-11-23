#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int len = 0, br = 0;

    printf("Enter length and breadth");
    cin>>len>>br;

    int area=len*br;
    int peri = 2*(len+br);

    printf("Area: %d\nPerimeter:%d", area, peri);

    return 0;


}