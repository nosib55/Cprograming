#include<stdio.h>
int reverseNum(int n, int reverse){
    if(n==0){
        return reverse;
    }

        return reverseNum(n/10,reverse*10+n%10);

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d is: %d",n,reverseNum(n,0));
    return 0;
} 