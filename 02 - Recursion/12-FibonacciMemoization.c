#include <stdio.h>

int IterativeFib(int n){

    int t0 = 0, t1 = 1, sum = 0, i;

    if(n <= 1) return n;

    for(i=2; i <= n; i++){
        sum = t0+t1;
        t0 = t1;
        t1 = sum;
    }

    return sum;
}

int RecursiveFib(int n){

    if(n <= 1) return n;
    return RecursiveFib(n-2) + RecursiveFib(n-1);

}

int F[10];

int MemoizationFib(int n){
    
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = MemoizationFib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = MemoizationFib(n-1);
        }
        return F[n-2]+F[n-1];
    }
}

int main(){

    for(int i = 0; i < 10; i++){
        F[i] = -1;
    }


    printf("%d \n", MemoizationFib(10));
    return 0;
}