#include <stdio.h>

/*void t4() {
  int sum,x;
  x = 1;
  sum = 0;
  while(x<=11){
    sum++;
  }
  printf("%s %d","NeedCodeExit : ",sum );
}*/


int main(){
  printf("%d",loop());
  return 0;
}

int loop(void){
    int sum =0;;
    for(int i = 1;i<=10;i++){
      sum+=i;
    }
    printf("sum is %d\t",sum);
}

/*int t3(void){
    int sum,x;
    x = 1;
    sum = 0;
    sum+=x;
    printf("%s %d","Cумма равна: ",sum);
}*/
