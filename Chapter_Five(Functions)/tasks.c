#include <stdio.h>
#include <math.h>
float hypotenuse(float side1,float side2);

 int main(){
     int number,x,y,z;
     float side1,side2;
     printf("%s\n","Введите катеты");
     scanf("%f%f",&side1,&side2);
     printf(" Ответ = %.2f\t\n",hypotenuse(side1,side2));
     instructions();
     /*printf("%s\n","Введите номер для преобразования");
     scanf("%d",&number);
     printf("Преобразованное число .2f",intToFloat(number));*/
     printf("%s\n","Введите 3 числа X Y Z ");
     scanf("%d %d %d",&x,&y,&z);
     printf("Наименьшее число : %d ", smallest(x,y,z));
 }

 float hypotenuse(float side1,float side2){
     float result = (side1*side1)+(side2*side2);
     return result;
 }

void instructions(){
    printf("%s\n%s\n%s\n","1","2","3");
}

/*float intToFloat(number){
    float res = number;
    return res;
}*/

int smallest(int x,int y,int z){
    if(x < y && x < z){
        return x;
    }else if(y < x && y < z){
        return y;
    }else{
        return z;
    }
}
