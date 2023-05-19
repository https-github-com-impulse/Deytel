#include <stdio.h>

int main(){
  printf("%d",salary());
  return 0;
}
  /*int loop(void){
    int sum =0;;
    for(int i = 1;i<=10;i++){
      sum+=i;
    }
    printf("sum is %d\t",sum);
}*/
  /*int t3(void){
    int sum,x;
    x = 1;
    sum = 0;
    sum+=x;
    printf("%s %d","Cумма равна: ",sum);
}*/
  /*void t4() {
  int sum,x;
  x = 1;
  sum = 0;
  while(x<=11){
    sum++;
  }
  printf("%s %d","NeedCodeExit : ",sum );
}*/
  /*int calculusBenz(void){//доделать
    float s,v,consumption,result,fullresult;
    int count=0;
    while (consumption!=-1) {
      printf("Введите расход бензина(-1 если ввод закончен): " );
        scanf("%f", &consumption);
      if(consumption == -1){
        break;
      }else{
        //scanf("%f", &consumption);
        printf("Введите пройденный путь: ");
        scanf("%f", &s);
        result  = s/consumption;
        printf("Для этой заправки полученно миль/галлон : %.2f\n",result);
        ++count;
        ++result;
      }
    }
      fullresult = result/count;
      printf("Среднее число миль/галлон = %.2f",fullresult);
}*/
  /*int creditCard(void){
        int numberCard;
        float balanceBegin,fullSummConsumption,fullSummCredit;
        float newBalance,sizeOfCredit;
        //printf("Введите номер счета (-1 если ввод закончен) : ");
        //scanf("%d",&numberCard);
        while (numberCard!=-1) {
          printf("Введите номер счета (-1 если ввод закончен) : ");
          scanf("%d",&numberCard);
            if(numberCard == -1){
              break;
            }else{
              printf("Введите начальный баланс : ");
              scanf("%f",&balanceBegin);
              printf("Введите общую сумму расходов : " );
              scanf("%f",&fullSummConsumption);
              printf("Введите общую сумму кредита:" );
              scanf("%f",&fullSummCredit );
              printf("Введите предельный размер кредита : " );
              scanf("%f",&sizeOfCredit);
              newBalance = balanceBegin+fullSummConsumption-fullSummCredit;
              printf("%s\n","==================================" );
              printf("Счет %d\nПредельный размер кредита %.2f\nБаланс %.2f\n",numberCard,sizeOfCredit,newBalance);
            }

            if(newBalance>sizeOfCredit){
              printf("Предельный размер кредита превышен \n");
              continue;
            }else{
              printf("Покупайте далее\n");
              continue;
            }
        }
}*/
  /*int chemicalCompany(void){
      float sumSalary,result,promRes;
      while(sumSalary!=-1){
          printf("%s\n","Введите сумму продаж в долларах (-1 если ввод закончен): " );
          scanf("%f", &sumSalary);
          promRes = (200+((9*sumSalary)/100));
          printf(" Зарплата : %.2f \n",promRes);
      }
}*/
  /*int bank(void){
      float principal,interest,days,rate;
      while(principal!=-1){
        printf("%s\n","Введите основную сумму ссуды (-1 если ввод закончен)");
          scanf("%f",&principal);
        if(principal==-1){
          break;
        }else{
          printf("%s","Введите процентную ставку : ");
          scanf("%f",&rate);
          printf("%s","Введите срок ссуды в днях : " );
          scanf("%f",&days);
          interest = principal*rate*(days/365);
          printf("Выплаты по простым процентам составляют %.2f \n",interest);
        }
      }
}*/
  /*int salary(void){
    float hours,tarif,ppl_salary;
    while (hours!=-1) {
      printf("%s","Введите # отработанных часов : " );
      scanf("%f",&hours);
      if(hours==-1){
        break;
      }else{
        printf("%s","Введите часовой тариф работника :" );
        scanf("%f",&tarif);
        if(hours>40){
          ppl_salary = hours *tarif *1,5;
        }else{
          ppl_salary = hours *tarif;
        }
        printf("Зарплата составляет : %.2f\n",ppl_salary );
      }
    }
}*/
