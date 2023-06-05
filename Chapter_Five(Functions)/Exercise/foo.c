 #include <stdio.h>

float calculateCharges(float hour1,float hour2,float hour3,float result,const float minimalPrice,const float maximumPrice);

 int main(){
     int cars;
     float hour1,hour2,hour3,charge,result;
     const float minimalPrice = 2.00;
     const float priceMoreThreeHours = 0.50;
     const float maximumPrice = 10.00;

     printf("%s\n","Введите общее время парковки ");

     scanf("%f%f%f",&hour1,&hour2,&hour3);

     printf("%s\n","Car\tHours\tCharge");
     printf("1\n\t.2f\.2f\n2\t.2f\t.2f\n3\t.2f\t.2f\n",hour1,calculateCharges,hour2,calculateCharges,hour3,calculateCharges);

 }

 float calculateCharges(float hour1,float hour2,float hour3,float result,const float minimalPrice,const float maximumPrice){

     if(hour1<=3 && hour2<=3 && hour3<=3){
         result = minimalPrice;
     }else if (hour1 == 24 && hour2 == 24 && hour3 == 24){
         result = maximumPrice;
     }else{
         return result;//result = minimalPrice+(hours - 3) * 0,50; //формула верна!
     }
     return result;
 }
