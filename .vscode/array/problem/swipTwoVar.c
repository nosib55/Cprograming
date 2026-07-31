#include<stdio.h>
int swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int a=10,b=20;
    printf("Before swapping: a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a=%d b=%d\n",a,b);
    return 0;
}