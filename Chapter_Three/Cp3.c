#include <stdio.h>

int main(){
  printf("%d",quadroTriangle());
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
  /*int cycle (void){
      for(int i = 1;i<=10;i++){
        printf("%d\t",i);
      }
}*/
  //алгоритм нахождения максимума из двух чисел с потока ввода.(кривой)
  /*int findLargest(void){
      int counter = 0;
       int number,maximum;
      while(counter<=10){
        counter++;
        scanf("%d",&maximum);
        scanf("%d",&number);
        if(number>maximum){
          maximum = number;
          printf("%d is maximum ",maximum);
        }
      }
}*/
  /*int tablePow(void){
      int n,tens,hundreds,thousands;
      int i = 1;
      printf("N\t10*N\t100*N\t1000*N\n\n");
      while (i<=10) {
        printf("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i);
        i++;
      }
}*/
  /*int refactoring(void){
        unsigned int passes = 0;
        unsigned int fails = 0;
        unsigned int student = 1;
        int result;
        do {
            printf("%s","Enter  result (1==pass/2==fail): ");
            scanf("%d",&result );
            if(result!=1 || result!=2){
              scanf("%d",&result);
            }else{
              if (result==1) {
                passes++;
              }else{
                fails++;
              }
              student++;
            }
        } while(student<=10 && result==1||result==2);

            printf("Passed %d\n",passes);
            printf("Failures %d\n",fails);
              if (passes>8) {
              printf("%s\n","Premium teacher" );
              }
          return 0;
}*/ //доделать
  /*int cycle2(void){
      int a;
      printf("%s","A\tA+2\tA+4\tA+6\n\n");
      for(int i = 3;i<=15;i+=3){

          printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6 );

      }
}*/
  /*int quadroPrint(void){
        int s ;
        printf("%s\n","Введите сторону квадрата: ");
        scanf("%d",&s);
        int i = 0;
        while (i<s) {
          int j=0;
          while (j<s) {
            printf("*");
            j++;
          }
          printf("\n");
          i++;
        }
}*/
  /*int whileSpeedTest(void){
      int i = 1;
      while(i<3000000){
        if(i==1000000){
          printf("%s","IS A MILLION!" );
        }
        i++;
        printf("%d\n",i);
      }
}*/
  /*int starline(void){
      int counterStars = 0;
       int count =1;
       int check=0;
        while(count<=100){
          printf("%s\n","*");
          count++;
          while(counterStars<=100){
              check++;
              if(count%2==0) {
                printf("\n");
              }
          }
        }
}*/ //доделать
  /*int chessPool(void){
      for(int i = 1;i<=8;i++){
        printf("\n");
          if(i%2==0){
            printf(" ");
          }
        for(int i =1; i<=8;i++){
          printf("* ");
      }
    }
}*/ //complete
  /*int infinityCycle(void){
      int i = 0;
        while(1){
          if(i%2==0){
              printf("%d ",i);
          }
          i++;
        }
}*/
  /*int radiusCircle(void){
      float r,p,d;
      const float pi = 3.14158;
      printf("%s","Введите радиус: ");
      scanf("%f",&r);
      printf("Диаметр круга = %.2f,\nПериметр круга = %.2f,\nПлощадь круга = %.2f\n",2*r,2*pi*r,pi*(r*r));
}*/
  /*int triangle(void){
        float a,b,c;
        printf("%s\n","Введите 3 стороны треугольника: " );
        scanf("%f %f %f", &a, &b, &c );
        if(a+b<c || a+c<b || b+c<a){
          printf("%s\n","It's triangle!" );
        }else{
          printf("%s\n", "Its no triangle :()" );
        }
    }*/// needRefactoring!
  /*int quadroTriangle(void){
      float a,b,c;
      printf("%s\n","Введите 3 стороны треугольника: " );
      scanf("%f %f %f", &a, &b, &c );
      if(((a*a)+(b*b))==(c*c)){
          printf("%s\n","Это прямоугольный треугольник");
      }else{
          printf("%s\n", "Увы и ах");
      }
    }*/
