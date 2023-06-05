#include <stdio.h>

//proto
int delimetr(int);

int main(){
    int a,b,number;
    //printf("%s\n","Введите 2 числа А и B");
    //scanf("%s",&a,&b);
    printf("%s","Введите 4-х значное число: ");
    scanf("%d",&number);
    printf("%d",delimetr(number));

}

//int even(int a, int b){
//    return a/b;
//}

//int odd(int a, int b){
//    return a%b;
//}
int delimetr(int number){
    int thousands = number/1000;
    int hundreds = (number/100)%10;
    int tens = (number-(number/100)*100)/10;
    int ed = (number%1000%100%10);
    printf("%d  %d  %d  %d\n",thousands,hundreds,tens,ed);
}
