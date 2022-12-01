#include <stdio.h> 

//m**n

int poww(int m, int n){
    if(n ==0)
        return 1;
    if(n % 2 == 0)
        return poww(m*m, n/2);
    else
        return m*poww(m*m, (n-1)/2);
}


int main(){

    int result = poww(2,9);
    printf("%d", result); 
    return 0;
}