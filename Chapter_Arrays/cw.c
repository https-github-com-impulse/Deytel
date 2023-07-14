#include <stdio.h>
int area_or_perimeter(int l , int w);

int main(){
    int l,w;
    printf("%d",area_or_perimeter(l,w));
}

int area_or_perimeter(int l , int w) {
  int perimetr = 2*l+w;
  if(l==w){
    return l*w;
  }
  return perimetr;
}