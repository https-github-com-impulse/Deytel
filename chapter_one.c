#include <stdio.h>
  int  main() {
    /* code
    printf("%d\n",getOper() );
    printf("%d",t18() );*/
    printf("%d",t24() );
    return 0;
  }

  /*int getOper(void){
    int a,b;
    scanf("%d %d",&a,&b );
    printf("Сумма %d, разность %d, произведение %d, частное %d /n",a+b,
    a-b,a*b,a/b );
}*/
  /*int t18(void) {
    int a,b;
    printf("Введите два целых числа\n" );
    scanf("%d %d",&a,&b );
    if(a>b){
      printf("%d is larger than %d \n",a,b );
    }else if (a==b) {
      printf("%d equal %d \n",a,b );
    }else{
      printf(" %d no equal and smallest than %d \n",a,b);
    }
}*/
  /*int t19(void) {
  int a,b,c,sum,mult,larger,smallest;
  printf("%d Input three different integers: ");
  scanf("%d %d %d",&a,&b,&c);
  printf("Sum is %d \nAverage is %d\nProduct is %d\n",a+b+c,(a+b+c)/3,(a*b*c));
  if(a<b && a<c){
      printf("Smallest is %d \n",a);
  }else if (b<a && b<c) {
      printf("Smallest is %d \n",b);
  }else{
      printf("Smallest is %d \n",c);
  }
  if(a>b && a>c){
      printf("Largest is %d \n",a);
  }else if (b>a && b>c) {
      printf("Largest is %d \n",b);
  }else{
      printf("Largest is %d \n",c);
  }
<<<<<<< Updated upstream
=======
}*/
  /*int t20(void) {
      const float pi = 3.14159;
      float radix,rad,s,p;
      scanf("%f",&rad );
      printf("Диаметр окружности = %f \nПериметр окружности = %f \nПлощадь окружности = %f", radix =2*rad,2*rad*pi,(rad*rad)*pi);
}*/


  /*int coordinates(void){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("Мы имеем 5 чисел, нужно найти наименьшее и наибольшее  из %d %d %d %d %d \n",a,b,c,d,e );
    if (a>b && a>c && a>d && a>e) {
      printf("%d наибольшее \n", );
}*/

/*  int figures(void){
    printf("*\n******\n");
    //printf("*\n*\n*\n*\n*\n*\n");
    printf("*********\n*\n*\n*\n*\n*\n*\n");
>>>>>>> 6f8366a97c21f100002058d89dcbe342750a0262
}*/

int t24(void){
    int num;
    scanf("%d",&num );
    if(num%2==0){
        printf("its gigits! \n");
    }else{
      printf("its no digits \n");
    }
}
