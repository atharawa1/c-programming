#include <stdio.h>

int main() {
    int start_num, end_num, sum = 0, i;

    printf("\t\t\t Sum Of Odd Numbers \n\n\n");
    printf("\t\t\t By Atharawa Prasad Parulekar \n\n");
    printf("Enter a Starting Number: ");
    scanf("%d", &start_num);
    printf("Enter an Ending Number: ");
    scanf("%d", &end_num);

   
    if (start_num > end_num) {
        printf("Error: Starting Number is higher than Ending Number\n");
        return 1;
    }

    
    for (i = start_num; i <= end_num; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i; // Add odd number to sum
        }
    }

    printf("Sum of Odd Numbers Between %d and %d is %d\n", start_num, end_num, sum);

    return 0;
}
