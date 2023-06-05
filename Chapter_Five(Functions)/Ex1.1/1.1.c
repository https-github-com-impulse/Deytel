#include <stdio.h>

    double hypotenuse(double,double);

    int main(){
        double sideA,sideB;
        for(int i = 1;i<=3;i++){
            printf("%s\n","Введите стороны треугольника: ");
            scanf("%lf%lf",&sideA,&sideB);

            printf("Для треугольника %d со сторонами A = %g B = %g гипотенуза = %g\n",i,sideA,sideB,hypotenuse(sideA,sideB));
        }

}

    double hypotenuse (double sideA,double sideB){
        double hypo = (sideA*sideA)+(sideB*sideB);
        return hypo;
}

    
