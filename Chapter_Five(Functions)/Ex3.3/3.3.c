#include <stdio.h>

int quadro(int);
//proto
int main(){
     int side;
     printf("%s","Введите кол во звездочек: ");
     scanf("%d",&side);
     printf("%d",quadro(side));
}

int quadro(int side){
    for(int i = 1;i<=side;i++){
        printf("\n");
        for(int j = 1;j<=side;j++){
            printf("%s","*");
        }
    }
}
