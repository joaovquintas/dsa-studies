#include <stdio.h>
#include <iostream>

using namespace std;

struct Retangulo{
    int length;
    int breadth;
    char x;
};

int main(){


    struct Retangulo r1={10,5};

    printf("%lu", sizeof(r1));

    return 0;
}
