#include <stdio.h>
#include <math.h>

    int main(){
            switch (/* expression */) {
                case /* value */:
            }

    }



/*программа должна расчитывать  и распределять зарплату для  распостранения равномерных затрат на месяц*/
    int calculate(){
        int monthMoney
        printf("%s\n","Введите вашу зарплату: " );
        scanf("%f \n",&monthMoney);

    }


    int calculateJKH(){
        float watherAcc,repairAcc,tsjAcc,
        electroAcc,domophoneAcc,gasAcc,sumJKH;
         printf("%s\n","Введите все данные комуннальных платежек по очереди:\n Вода:\nКомунальный ремонт:\n ТСЖ:\nЭллектричество + Мусор:\nДомофон:\nГаз:\n" );

         scanf("%s\n",&watherAcc,&repairAcc,&tsjAcc,
        &electroAcc,&domophoneAcc,&gasAcc);

        sumJKH = watherAcc+repairAcc+tsjAcc+
        electroAcc+domophoneAcc+gasAcc;

        printf("%s%.2f\n","Сумма ЖКХ в этом месяце составила: %f",sumJKH);
            
    }
