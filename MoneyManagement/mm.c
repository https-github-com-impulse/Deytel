#include <stdio.h>
#include <math.h>

    int main(){
            printf("%d",calculateJKH());

    }



/*программа должна расчитывать  и распределять зарплату для  распостранения равномерных затрат на месяц*/
    /*int calculate(){
        int monthMoney
        printf("%s\n","Введите вашу зарплату: " );
        scanf("%f \n",&monthMoney);

    }*/

 /* Написать функцию - метод для сверки  показаний ЖКХ показаний * тариф (в будущем занос в DB)*/
 
    int calculateJKH(){

        float watherAcc,repairAcc,tsjAcc,
        electroAcc,domophoneAcc,gasAcc,sumJKH;

         printf("%s\n","Введите все данные комуннальных платежек по очереди: ");
         printf("%s","Вода: ");
         scanf("%f",&watherAcc);
         printf("%s","Ком.Ремонт: ");
         scanf("%f",&repairAcc);
         printf("%s","ТСЖ: ");
         scanf("%f",&tsjAcc);
         printf("%s","Эллектричество + Мусор : ");
         scanf("%f",&electroAcc);
         printf("%s","Домофон: " );
         scanf("%f",&domophoneAcc);
         printf("%s","Газ: " );
         scanf("%f",&gasAcc);

          sumJKH = watherAcc+repairAcc+tsjAcc+
        electroAcc+domophoneAcc+gasAcc;

         printf("%s%.2f рублей.\n","Сумма ЖКХ в этом месяце составила:  ",sumJKH);

    }
