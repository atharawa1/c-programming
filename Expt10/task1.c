// adding two numbers using pointers
#include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2, *ptrSum;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 ptr1 = &num1;
 ptr2 = &num2;
 ptrSum = &sum;
 *ptrSum = *ptr1 + *ptr2;
 printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
 return 0;
}
