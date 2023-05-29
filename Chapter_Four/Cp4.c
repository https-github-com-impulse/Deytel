#include <stdio.h>
#include <math.h>

int main(){
    return  calendar();
  //printf("%d",gistogramma());

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
    /*int fuckingPos(){
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
}*/ //dodelyat
    /*int sumDigits(){
          int sum = 0;
          for(int i = 2;i<=30;i++){
              if(i%2==0){
                  sum+=i;
              }
          }
          printf("Сумма четных чисел в промежутке от 2 до 30 : %d\t",sum );
      }*/
    /*int sumOds(){
            int ods = 0 ;
          for(int i = 1 ;i<=15;i++){
              if(i%2!=0)
              ods+=i;
          }
          printf("Сумма не четных цифр от 1 до 15 = %d ",ods );
      }*/
    /*int gistogramma(){
          int a,b,c,d,e;
          printf("%s","Введите 5 чисел между 1 и 30  попорядочку\n");
                scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            for(int i = 1;i<=a;i++){
                printf("%s","*");}
                printf("\n");
                for(int j = 1;j<=b;j++){
                    printf("%s","*");}
                    printf("\n");
                    for(int k = 1 ; k<=c;k++){
                        printf("%s","*");}
                        printf("\n");
                        for(int l = 1 ;l<=d;l++){
                            printf("%s","*");}
                            printf("\n");
                            for(int n = 1; n<=e;n++){
                                printf("%s","*" );}
                                printf("\n");
}*/
    /*int firma(){
            int number;
            float price,fullPrice, count;
            printf("%s\n","Введите  номер и количество изделий проданное за день: ");
            scanf("%d %d",&number,&count);
            switch (number) {
                case 1:
                    price = 2.98;
                    fullPrice+=price*count;
                case 2:
                    price = 4.50;
                    fullPrice+=price*count;
                case 3:
                    price = 9.98;
                    fullPrice+=price*count;
                case 4:
                    price = 4.49;
                    fullPrice+=price*count;
                case 5:
                    price = 6.87;
                    fullPrice+=price*count;
            }
            printf("Полная цена розничных товаров = %.2f", fullPrice);
        }*/ //dodelyat
      int calendar(){
          int years = 2023 ;
          int days;
          int month = 12;
          for(int i = years;i<=2025;i++){
              printf("Months\t%d\t",i);
          }
          printf("\n");
          for(int i = 1;i<=month;i++){
              printf("%d ",i);
              switch (i) {
                  case 1: printf("\t%s\n","31 days");break;continue;
                  case 2: printf("\t%s\n","28 days");break;continue;
                  case 3: printf("\t%s\n","31 days");break;continue;
                  case 4: printf("\t%s\n","30 days");break;continue;
                  case 5: printf("\t%s\n","31 days");break;continue;
                  case 6: printf("\t%s\n","30 days");break;continue;
                  case 7: printf("\t%s\n","31 days");break;continue;
                  case 8: printf("\t%s\n","31 days");break;continue;
                  case 9: printf("\t%s\n","30 days");break;continue;
                  case 10: printf("\t%s\n","31 days");break;continue;
                  case 11: printf("\t%s\n","30 days");break;continue;
                  case 12: printf("\t%s\n","31 days");break;continue;
              }
              }

         }
