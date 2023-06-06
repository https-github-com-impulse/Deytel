#include <stdio.h>

int perfectNumber (int);

int main(){
    int number;
    printf("%s\n\n","Введите число: ");
    scanf("%d",&number);
    printf("%s\n","*******************");
    printf("\n%d\n\n",perfectNumber(number));
    
}

int perfectNumber(int number){
    int counter = 0;
    for(int i = 1;i<=number/2;i++){
         if(number%2==0)
         counter+=i;
         printf("%d\n",i);
    }
    counter == number? printf("%s\n","Идеал"):printf("%s\n","Нет");
}
