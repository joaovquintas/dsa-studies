#include <stdio.h>
#include <iostream>

using namespace std;

struct Retangulo{
    int length;
    int breadth;
    char x; //only use 1byte but if u read usaing sizeof will use 4bytes
    //padding it's called;
};

int main(){


    struct Retangulo r1={10,5};

    r1.length = 102;
    r1.breadth = 11;

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}
