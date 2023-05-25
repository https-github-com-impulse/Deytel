#include <stdio.h>
#include <math.h>

int main(){
  printf("%d",sum());
  return 0;
}

  /*int task(){
          int sum;
          for(int i = 1; i<=99;i++){
            if(i%2!=0){
              sum+=i;
            }
          }
          printf("Сумма нечетных целых  = %d \n",sum);
}*/
  /*int task2(){
          printf("%10.2f\n",pow(2.5,3));
}*/
  /*int task3(){
      int x=0;
      while(x++<=19){
        printf("%d",x);
          if(x%5==0){
            printf("\n");
          }else{
            printf("\t");
          }
      }
}*/
  /*int task3a(){
        for(int i = 1;i<=20;i++){
                printf("%d",i);
                if(i%5==0){
                    printf("\n");
                }else{
                  printf("\t");
                }
        }
}*/
    int sum(){
         int total = 0;
        for(int x = 100; x<=150;x++){
            total+=x;
        }
        printf("%d",total );
    }
