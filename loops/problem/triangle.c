// #include <stdio.h>

// int main () {
//     int i = 0, j;
    
//     do {
//         j = 0; // Resets star counter for the new row
        
//         do {
//             printf("* "); // Space added after * for a cleaner layout
//             j++;
//         } while (j <= i); // Inner loop matches the current row index
        
//         printf("\n"); // Moves to the next line
//         i++;  
//     } while (i <= 5); // Controls the 6 rows (0, 1, 2, 3, 4, 5)
    
//     return 0;
// }
#include <stdio.h>

int main () {
    int i = 5, j;
    
    do {
        j = 0; // Resets star counter for the new row
        
        do {
            printf("* "); // Space added after * for a cleaner layout
            j++;
        } while (j <= i); // Inner loop matches the current row index
        
        printf("\n"); // Moves to the next line
        i--;  
    } while (i>=0); // Controls the 6 rows (0, 1, 2, 3, 4, 5)
    
    return 0;
}
