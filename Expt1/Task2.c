#include<stdio.h>
    
 int main()
 {
 int phy,chem,maths;
 float avg;

 printf("Enter PCM marks and check eligibility of students\n");

 printf("Enter physics marks =");
 scanf("%d",&phy);
 printf("Enter chemistry marks=");
 scanf("%d",&chem);
 printf("Enter maths marks =");
 scanf("%d",&maths);

 avg=(phy+chem+maths)/3;

 printf("PCM average= %.3f",avg);

 avg>50 ?
 printf("\n student is eligible for admission"):
 printf("\n student is not eligible for admission");



 return 0;
 }
