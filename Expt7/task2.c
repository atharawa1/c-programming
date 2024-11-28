// calculate sum of two matrix.
#include <stdio.h>
int main() {
 int rows, cols;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 printf("Enter the number of columns: ");
 scanf("%d", &cols);
 int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
 printf("Enter elements of the first matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix1[i][j]);
 }
 }
 printf("Enter elements of the second matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix2[i][j]);
 }
 }
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 sum[i][j] = matrix1[i][j] + matrix2[i][j];
 }
 }
 printf("Sum of the two matrices:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("%d ", sum[i][j]);
 }
 printf("\n");
 }
 return 0;
}
