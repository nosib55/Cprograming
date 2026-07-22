#include <stdio.h>
int main (){
    int row, col, mattrix[50][50], matt1[50][50], matt2[50][50];
    printf("Enter the value of row : ");
    scanf("%d", &row);
    printf("Enter the value of column : ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the value of matt1 %d*%d: ", i, j);
            scanf("%d", &matt1[i][j]);
        }
    }
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the value of matt2 %d*%d: ", i, j);
            scanf("%d", &matt2[i][j]);
        }
    }
    
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            mattrix[i][j] = matt1[i][j] + matt2[i][j];
            printf(" %d ", mattrix[i][j]); 
            
            if (j == col - 1) {
                printf("\n\n");
            }
        }
    }

    return 0;
}
