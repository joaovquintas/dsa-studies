#include <stdio.h>
#include <stdlib.h>

struct Array{

    int *A;
    int size;
    int length;

};

void Display(struct Array arr){
    int i;
    printf("\nElementes are\n");
    for(i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x){
    
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x){

    if(index >= 0 && index <= arr->length){
        for(int i = arr->length; i > index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
    


}

int main(){

    struct Array arr;
    int n, i;
    printf("Enter size of an array: \n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers: \n");
    scanf("%d", &n);

    printf("Enter all elements: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);
    arr.length = n;

    Insert(&arr, 0, 110);
    //Append(&arr, 10);
    Display(arr);






    return 0;

}