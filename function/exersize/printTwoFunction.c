#include <stdio.h>
void printHello(int num){
    printf("HELLO %d \n",num);
}
void printBye(int num){
    printf("Bye %d \n",num);
}
int main(){
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0){
    printHello(i);
}
else{
    printBye(i);
}
}

return 0;}
