#include <stdio.h>
int maxi(int arr[],int n){
   int max = arr[0];
   for (int i =0;i<n;i++){
    if (arr[i]>max){
        max = arr[i];
    }
   
   }
    return max;

}

int mini(int arr[],int n){
   int mini=arr[0];
    for (int i=0;i<n;i++){
  if (arr[i]<mini){
    mini=arr[i];
  }
  
    }
    return mini;
}
int main(){
    int array[100], n;
    printf("Enter the size of array ");
    scanf("%d",&n);
for (int i =0;i<n;i++){
    scanf("%d",&array[i]);

}
printf("Maximum = %d\n", maxi(array, n));
    printf("Minimum = %d\n", mini(array, n));
}