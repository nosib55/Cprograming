#include <stdio.h>
int main(){
    int a,b,sum,sub,mod,mul,div;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b; // typecasting 
    mod=a%b;
    printf("sum = %d\n sub = %d\n mul = %d\n div = %.2f\n mod = %d\n",sum,sub,mul,div,mod);

return 0;
} 