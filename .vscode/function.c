#include <stdio.h>
int function1(int a, int b) {
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    return c,d,e,f;
}
int main() {
    int x,y;
    printf("Enter Value Of x and y: ");
    scanf("%d %d", &x, &y);
    int result = function(x, y);
    printf("Result: %d\n", result);
    return 0;
} 