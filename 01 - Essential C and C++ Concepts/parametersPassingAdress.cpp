#include <iostream>

using namespace std;

void swap(int *x, int *y){  //passing by adress; 
    
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){

    int num1 = 10, num2 = 15;

    swap(&num1, &num2); //adress of actual parameters

    cout<<"First num: "<<num1<<endl;
    cout<<"Second num: "<<num2<<endl;

    return 0;

}