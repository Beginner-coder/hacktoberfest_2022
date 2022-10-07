/*
* C Program to print transpose of a matrix
*/
 
#include <stdio.h>
#include <conio.h>
 
int main(){
    int rows, cols, rowCounter, colCounter;
    int inputMatrix[50][50], transposeMatrix[50][50];
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
     
    printf("Enter Matrix of size %dX%d\n", rows, cols);
     
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
     
    /* transpose[i][j] = inputMatrix[j][i] */
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            transposeMatrix[colCounter][rowCounter] = inputMatrix[rowCounter][colCounter];
        }
    }
     
    printf("Transpose Matrix\n");
    /*Transpose Matrix of MXN  =  NXM Matrix */
    for(rowCounter = 0; rowCounter < cols; rowCounter++){
        for(colCounter = 0; colCounter < rows; colCounter++){
            printf("%d ", transposeMatrix[rowCounter][colCounter]);
        }
        printf("\n");
    }
    getch();
    return 0;
}