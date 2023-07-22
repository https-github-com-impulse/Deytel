/*Входные данные: 5 целых чисел через пробел.

Выходные данные: 1 число - сумма всех 5 чисел.*/

#include <stdio.h>
#define  SIZE 10

int main(){
    int arr[SIZE];
    int i,k,n;
    int sum = 0;
    for(i = 0; i < SIZE; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&n);

    for(i = k; i<n;i++){
        sum+=arr[i];
    }
    
    printf("%d",sum);
    return 0;
}

