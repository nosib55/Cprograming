#include <stdio.h>
int sum (int x, int y){
return x+y;
}
int main (){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int s=sum(a,b);
    printf("%d",s);
    
   return 0; 
}