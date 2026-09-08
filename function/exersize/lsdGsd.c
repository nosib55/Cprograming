#include <stdio.h>
int gsd(int a,int b){
    while(b!=0){
        int temp =b;
        b=a%b;
        a=temp;
    }
    return a;
}

// int lsd(int a,int b){
//     return (a*b)/gsd(a,b);
// }

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
//    printf("lsd is   %d", lsd(a,b));
   printf("gsd is   %d", gsd(a,b));

return 0;
}