//finding the length of a string without using library function.
#include <stdio.h>
int main() {
 char str[100];
 int length = 0;
 printf("Enter a string: ");
 scanf("%s", str);
 while (str[length] != '\0') {
 length++;
 }
 printf("The length of the string is: %d\n", length);
 return 0;
}
