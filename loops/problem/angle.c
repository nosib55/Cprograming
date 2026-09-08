#include <stdio.h>

int main()
{
    int i, j, n = 9;

    for(i = 1; i <= n; i++)
    {
        // Print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int i, j, n = 10;

//     for(i = n; i >= 1; i--)
//     {
//         // Print spaces
//         for(j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }

//         // Print stars
//         for(j = 1; j <= i; j++)
//         {
//             printf(" * ");
//         }

//         printf("\n");
//     }

//     return 0;
// }