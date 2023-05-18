#include <stdio.h>

int main(){
  printf("%d",creditCard());
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

    int creditCard(void){
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
    }
