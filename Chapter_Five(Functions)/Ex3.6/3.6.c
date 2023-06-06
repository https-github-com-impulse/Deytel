#include <stdio.h>

float returnLowest(float , float , float );
int main(){
    float a,b,c;
    printf("%s\n","Введите 3 числа для нахождения наименьшего: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Наименьшее из чисел %.2f %.2f и %.2f - %.2f",a,b,c,returnLowest(a,b,c));
}


float returnLowest(float a, float b, float c){
    if(a<b && a<c)
    return a;
    else if(b<c && b<a)
    return b;
    else
    return c;
}
