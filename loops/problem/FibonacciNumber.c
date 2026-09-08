#include<stdio.h>
int main (){
    int n,frist=0,second=1,next;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            next=0;
        }
        else if (i==1)
        {
           next=i;
        }
        else{
            next=frist+second;
            frist =second;
            second=next;
        }
        
    }

    printf("%d",next);
    return 0;
}