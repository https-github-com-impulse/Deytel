#include <stdio.h>
#define SIZE 10
int main(){
    int arr[SIZE]= {15,2,33,44,3,12,78,66,1,4};
    int counter,i,swap;
    
    for(i = 0; i<SIZE;i++){
        printf("%3d",arr[i]);
    }
    //bubble sort
    for(counter = 1; counter<SIZE;counter++){
        for(i = 0; i < SIZE ;i++){
            if(arr[i]>arr[i+1]){
                swap = arr[i]; // swap переменная получает индекс массива и происходит обмен
                arr[i]= arr[i+1];
                arr[i+1] = swap;
            }
        }
    }

    puts("\nОтсортированный массив : \n");

    for( i = 0; i < SIZE;i++){
        printf("%4d",arr[i]);
    }
    puts("");
    return 0 ;
}