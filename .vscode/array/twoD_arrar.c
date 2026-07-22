#include <stdio.h>

int main() {
    int row, col, matt[100][100];
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    // Input loop
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Enter the value of matt[%d][%d] : ", i, j);
            scanf("%d", &matt[i][j]);
        }
    }
    
    // Output loop
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf(" %d ", matt[i][j]);
            if (j == col - 1) {
                printf("\n\n"); // Fixed to a single newline for standard matrix look
            }
        } // The closing brace for the inner loop was missing/misplaced in your logic
    }
    
    return 0; // Moved outside the loops so the program prints everything before exiting
}
