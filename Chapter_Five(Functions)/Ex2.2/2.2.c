#include <stdio.h>

int intPow(int,int);//proto

int main(){
    int base,exponent,side;
    printf("%d\t",intPow(8,5) );
    printf("%d",multiply(8,3));
    printf("%s\n","Введите сторону квадрата ");
    scanf("%s",&side);
    printf("%d",square(side));
}

int intPow(int base,int exponent){
    int result = 1;
    for(int i = 1;i<=exponent;i++){
            result*=base;
        }
    return result;
}

int multiply(int one,int two){
    one%two==0?printf("%s","True\t"):printf("%s","False\t");
    return 0;
}

int even (int num){
    if(num%2==0){
        return 1;
    }else{
        return 0;
    }
}
