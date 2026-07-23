#include <stdio.h>
int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The number is: %d\n", i);

    while (i<=10) {
        printf("%d ", i);
        i++;
    }
    return 0;
}