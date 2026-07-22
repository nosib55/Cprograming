#include<stdio.h>
int main (){
   int num,sum=0,avg;
   int arr[100];
   printf("Enter the size of array: ");
   scanf("%d",&num);
   for (int i=0;i<num;i++){
    printf("Enter the value of array[%d]: ",i);
    scanf("%d",&arr[i]);
    sum += arr[i];
   }
   avg = sum / num;
   printf("The average of the array is: %d",avg);
}