#include <stdio.h>
int main (){
    int number,i=1;
    scanf("%d",&number);
    
    // for(i=1;i<=10;i++)
    // {
    //     printf("%d X %d = %d \n",number,i,number*i);
    // }

    while (i<=10)
    {
        printf("%d X %d = %d\n",number,i,number*i);
        i++;
    }
    
    return 0;
}