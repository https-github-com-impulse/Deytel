#include <stdio.h>
#define SIZE 100
int lineSearch(const int arr[],int key,int size);

int main(){
    int arr[SIZE],x,searchKey,elem;
    //create data
    for( x = 0; x < SIZE; x++){
        arr[x] = 2*x;
    }
    puts("Введите поисковый ключ: ");
    scanf("%d",&searchKey);
    elem = lineSearch(arr,searchKey,SIZE);

    if(elem!=-1){
        printf("%d\n",elem);
    }else if(elem==1){
        printf("Нету");
    }
    return 0;
}   

int lineSearch(const int arr[],int key,int size){
    int count;
    int str;
    for(count = 0;count < size; ++count){
        if( arr [count] == key ){
            str = printf(" Ключ элемента под номером %d  значение элемента: %d\n",count,arr[count]);
            return str;
        }else{
            return 0;
        }
    }
    return -1;
}

