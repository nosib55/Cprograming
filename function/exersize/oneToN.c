#include <stdio.h>
int allSum(int n){
    // if (n==1){
    if (n==1 || n==0){
        return 1;
    }
    // return n + allSum(n-1); for  sum of one to N
    return n * allSum(n-1); //for 
}
int main (){
    int a;
    scanf("%d",&a);
    int result = allSum(a);
    printf("The Result Is : %d",result);
    return 0;
}  