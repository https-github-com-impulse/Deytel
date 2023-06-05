#include <stdio.h>

int intPow(int,int);//proto

int main(){
    int base,exponent;
    printf("%d\t",intPow(8,5) );
}

int intPow(int base,int exponent){
    int result = 1;
    for(int i = 1;i<=exponent;i++){
            result*=base;
        }
    return result;
}
