#include <iostream>

using namespace std;

int add(int a, int b){  //passing by value; 
    //int c = a+b;

    /*a++;//actual parameter wont change!
    cout<<a<<endl;*/

    return 0;
}

int main(){

    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2);
    cout<<num1<<endl;
    //cout<<"Sum is: "<<sum;


    return 0;

}