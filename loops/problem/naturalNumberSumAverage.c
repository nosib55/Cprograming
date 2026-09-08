#include<stdio.h>
int main (){
    int sum=0;
    float avg;
    for(int i=1;i<=99;i++){
sum=sum+i;
avg=(float)sum/99;
    }
    printf("sum =%d\n",sum);
    printf("avg =%.2f",avg);
    return 0;
}