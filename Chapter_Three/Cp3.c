#include <stdio.h>

int main(){
  printf("%d",calculusBenz());
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

  int calculusBenz(void){
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
  }
//607/65.81
