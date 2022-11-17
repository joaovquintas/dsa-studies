#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int n;
    cout<<"Entre com o numero";
    cin>>n;
    int B[n];

    for(int i = 0; i < 8; i++){
        cout<<B[i]<<endl;
    }

    for(int x:B){
        cout<<x<<endl; //jeito novo de printar.
    }

    cout<<sizeof(B)<<endl; //4bytes;

    return 0;
}