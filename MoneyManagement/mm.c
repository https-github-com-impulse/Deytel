#include <stdio.h>
#include <math.h>

    int main(){
            float sumJKH;
            printf("%d",calculate() );
            //printf("%d",calculateJKH());

    }



/*программа должна расчитывать  и распределять зарплату для  распостранения равномерных затрат на месяц*/
    int calculate(){
        int monthSalary,apartmentSum,benzin,products,freeMoney;
        printf("%s","Введите вашу зарплату: " );
            scanf("%d",&monthSalary);
        printf("%s","Введите затраты на бензин на 4 недели: ");
            scanf("%d",&benzin);
        printf("%s","Введите затраты на продукты на 4 недели: ");
            scanf("%d",&products);
        apartmentSum = 7000+calculateJKH();
        printf("Итого свободных денег остается (Зарплта %d руб.- Бензин %d руб - Продукты %d руб - Квартира %d рублей = %d рублей)\t",monthSalary,benzin,products,apartmentSum,monthSalary-benzin-products-apartmentSum);
    }


/*Написать функцию расчета общих затрат на ЖКХ*/
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
         printf("%s","Эллектричество + Мусор: ");
         scanf("%f",&electroAcc);
         printf("%s","Домофон: " );
         scanf("%f",&domophoneAcc);
         printf("%s","Газ: " );
         scanf("%f",&gasAcc);

          sumJKH = watherAcc+repairAcc+tsjAcc+
        electroAcc+domophoneAcc+gasAcc;

         printf("%s%.2f рублей.\n","Сумма ЖКХ в этом месяце составила:  ",sumJKH);
         return sumJKH;

} //++done

 /* Написать функцию - метод для сверки  показаний ЖКХ показаний * тариф (в будущем занос в DB)*/
        /*int checkJKH(){

            const float staticElectroTariff = 4.01;//эл тариф
            const float staticWatherTariff = 40.82; //мусор тариф
            const float staticGasTariff = 1488;

            const float currentElectroTariff;
            const float currentWatherTariff;
            const float currentGasTariff;

            float lastMonthElectroRate,lastMonthGasRate,
            lastMonthWatherRate,currentElectroRate,currentGasRate,currentWatherRate,promResElectro,promResGas,promResWather;

                printf("\t%s"," Введите текущие показания счетчиков учета:\nЭлектроэнергия: ");
                    scanf("%f",&currentElectroRate);
                printf("%s","Газ: ");
                    scanf("%f",&currentGasRate);
                printf("%s","Вода: ");
                    scanf("%f",&currentWatherRate);

                printf("\t%s"," Введите показания прошлого месяца :\nЭлектроэнергия: ");
                    scanf("%f",&lastMonthElectroRate);
                printf("%s","Газ: ");
                    scanf("%f",&lastMonthGasRate);
                printf("%s","Вода: ");
                    scanf("%f",&lastMonthWatherRate);

                printf("\t%s"," Введите тариф на электроэнергию: ");
                    scanf("%f",&currentElectroTariff);
                printf("\t%s"," Введите тариф на газ: ");
                    scanf("%f",&currentGasTariff);
                printf("\t%s"," Введите тариф на водоснабжение: ");
                    scanf("%f",&currentWatherTariff);

                promResElectro = currentElectroRate - lastMonthElectroRate;
                promResGas = currentGasRate - lastMonthGasRate;
                promResWather = currentWatherRate - lastMonthWatherRate;

                printf("\tПокзания за текущий месяц составили:\nЭлектроэнергия: %.2f кВт.\nГаз: %.2f Кубов\nВодоснабжение: %.2f м3\t\n",promResElectro,promResGas,promResWather);

                //current tarif * promresults + add if (if nostatic)
                printf("\tОплата согласно тарифу за текущий месяц: \n Электроэнергия - %.2f руб\n Газ - %.2f руб\n Водоснабжение - %.2f руб\t\t",promResElectro*currentElectroTariff,promResGas*currentGasTariff,promResWather*currentWatherTariff);
        }*/ //++ done
