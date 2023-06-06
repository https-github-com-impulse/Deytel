#include <stdio.h>

//proto
int celsius(void);
int farengheit(void);
//float fatrngheit(float);

int main(){
    printf("%s\t\t%s\n","Celsuis","Farenhiit");
    printf("%d\n\t%d\n",celsius(),farengheit());


}

int celsius(){
    for(int i = 0 ;i<=100;i++){
        printf("%d градусов\n",i);
    }
}
