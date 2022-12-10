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



int Delete(struct Array *arr, int index){

    int x=0;

    if(index >= 0 && index <= arr->length-1){
        x = arr->A[index];

        for(int i = index; i < arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;

    }                                 
    return 0;
}

void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}



int LinearSearch(struct Array *arr, int key ){ //no pointer need cuz the search will look for a value direclty. 

    for(int i = 0; i < arr->length; i++){
        
        if(key == arr->A[i]){
            //transposition:
            //swap(&arr->A[i], &arr->A[i-1]);
            //return i;

            //move to head: 
            swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key){

    int lower, higher, mid;
    lower = 0;
    higher = arr.length - 1;

    while(lower <= higher){

        mid = (lower+higher)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            higher = mid-1;
        else
            lower = mid+1;
    }
    return -1;
}

int RecursiveBinarySearch(int a[], int lower, int higher, int key){
    int mid;

    if(lower <= higher){
        mid = (lower+higher)/2;
        
        if(key == a[mid])
            return mid;
        else if(key < a[mid])
            return RecursiveBinarySearch(a, lower, mid-1, key);
        else   
            return RecursiveBinarySearch(a, mid+1, higher, key);
    }
    return -1;
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

    //Insert(&arr, 0, 110);

    //Append(&arr, 10);

    //printf("\n %d \n", Delete(&arr, 0));

    //printf("\n %d \n", LinearSearch(&arr, 4));

    //printf("\n %d \n", RecursiveBinarySearch(arr.A,0,arr.length,6));

    Display(arr);


    return 0;

}