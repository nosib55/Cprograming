#include  <stdio.h>
int main ()
{
    int a;
    printf("Enter a number: ");
    scanf ("%d", &a);
// if (a%2==0)
//     {
//         printf ("THE NUMBER IS EVEN");
//     }
//     else
//     {
//         printf ("THE NUMBER IS ODD");
//     }

if (a>0){
    printf("the number is positive");

}
else if (a<0){
    printf("the number is negative");
}
else{
    printf("the number is zero");
}
return 0;
}