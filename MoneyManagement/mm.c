#include <stdio.h>
#include <math.h>

    int main(){
            //printf("%d",calculateJKH());
            printf("%d",checkJKH() );
    }



/*программа должна расчитывать  и распределять зарплату для  распостранения равномерных затрат на месяц*/
    /*int calculate(){
        int monthMoney
        printf("%s\n","Введите вашу зарплату: " );
        scanf("%f \n",&monthMoney);

    }*/

 /* Написать функцию - метод для сверки  показаний ЖКХ показаний * тариф (в будущем занос в DB)*/

        /*int calculateJKH(){

        float watherAcc,repairAcc,tsjAcc,
        electroAcc,domophoneAcc,gasAcc,sumJKH;

         printf("%s\n","Введите все данные комуннальных платежек по очереди: ");
         printf("%s","Вода: ");
         scanf("%f",&watherAcc);
         printf("%s","Ком.Ремонт: ");
         scanf("%f",&repairAcc);
         printf("%s","ТСЖ: ");
         scanf("%f",&tsjAcc);
         printf("%s","Эллектричество + Мусор: ");
         scanf("%f",&electroAcc);
         printf("%s","Домофон: " );
         scanf("%f",&domophoneAcc);
         printf("%s","Газ: " );
         scanf("%f",&gasAcc);

          sumJKH = watherAcc+repairAcc+tsjAcc+
        electroAcc+domophoneAcc+gasAcc;

         printf("%s%.2f рублей.\n","Сумма ЖКХ в этом месяце составила:  ",sumJKH);

}*/ //++

        int checkJKH(){

            const float staticElectroTariff = 4.01;//эл тариф
            const float staticWatherTariff = 40.82; //мусор тариф
            const float staticGasTariff = 1488;

            const float currentElectroTariff;
            const float currentWatherTariff;
            const float currentGasTariff;

            float lastMonthElectroRate,lastMonthGasRate,
            lastMonthWatherRate,currentElectroRate,currentGasRate,currentWatherRate,promResElectro,promResGas,promResWather;

                printf("%s","Введите текущие показания счетчиков учета:\nЭлектроэнергия: ");
                    scanf("%f",&currentElectroRate);
                printf("%s\n","Газ: ");
                    scanf("%f",&currentGasRate);
                printf("%s","Вода: ");
                    scanf("%f",&currentWatherRate);

                printf("%s","Введите показания прошлого месяца :\nЭлектроэнергия: ");
                    scanf("%f",&lastMonthElectroRate);
                printf("%s","Газ: ");
                    scanf("%f",&lastMonthGasRate);
                printf("%s","Вода: ");
                    scanf("%f",&lastMonthWatherRate);

                printf("%s","Введите тариф на электроэнергию: ");
                    scanf("%f",&currentElectroTariff);
                printf("%s","Введите тариф на газ: ");
                    scanf("%f",&currentGasTariff);
                printf("%s","Введите тариф на водоснабжение: ");
                    scanf("%f",&currentWatherTariff);

                promResElectro =


        }
