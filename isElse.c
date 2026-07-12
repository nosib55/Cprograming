#include <stdio.h>

int main() {
    printf("Enter two numbers: ");
    int x,y ;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        printf("x is greater than y\n");
    } else {
        printf("x is not greater than y\n");
    }

    return 0;
}