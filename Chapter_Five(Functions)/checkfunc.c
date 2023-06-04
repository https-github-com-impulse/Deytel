#include <stdio.h>
#include <math.h>

int qube(int y);

int main() {
    int x,result,resTwo;
    for(x = 1;x<=10;x++){
        result = qube(x);
        resTwo = mathpow(x);
        if( result=!resTwo){
            printf("%s\n","func not work! its quadro");
            printf("%d\n",result);
        }else{
            printf("%d\n",result);
            printf("%d\n",resTwo);
        }
    }
    return 0;
}

 int qube(int y ){
     return y=y*y;
}
int mathpow(int y){
    int result = pow(y,3);
    return result;
}
