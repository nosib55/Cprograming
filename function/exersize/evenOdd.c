#include <stdio.h>
int evenOdd(int n){
    if (n%2==0){
        printf("this is a even number");
    }
    else{
        printf("this is a odd number");
    }
}
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    evenOdd(a);
}
