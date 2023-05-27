#include <stdio.h>
#include <math.h>

int main(){
  printf("%d",fuckingPos());

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
    /*Написать программу выводящую на экран первые
N натуральных чисел.*/
    /*int firstNums(){
        int x;
        scanf("%d",&x);
        for(int i = 1; i <=x; i++){
            printf("%d ",i);
        }
}*/
    /*int firstPosition(){
         int count_nums;
         printf("%s","Введите границу последовательности: ");
            scanf("%d",&count_nums);
         for(int i = 1;i<=count_nums;i++){
             for(int j = i;j<=i;j++){
                 scanf("%d",&i);
             }
         }
         printf("%s\n","cycle done good lock!");
     }*/
      int fuckingPos(){
          int count_nums;
          int sum = 0;
          int control_var = 9999;
          int average;
          printf("%s","Введите несколько целых чисел для расчета среднего значения: ");
            scanf("%f",&count_nums );
            for(int i = 1 ; i<=count_nums;i++){
                for(int j = i; j<=i;j++){

                    sum+=j;
                }
            }
        average = sum/count_nums;
        printf("Среднее арифметическое равно %d\t",average);
      }
