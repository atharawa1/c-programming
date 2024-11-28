#include<stdio.h>
extern int countExtern;
void counterFunctionStatic() {
static int countStatic = 0;
countStatic++;
printf("Static: Function called %d times\n", countStatic);
}
void counterFunctionAuto() {
auto int countAuto = 0;
countAuto++;
printf("Auto: Function called %d times\n", countAuto);
}
void counterFunctionRegister() {
register int countRegister = 0;
countRegister++;
printf("Register: Function called %d times\n", countRegister);
}
void counterFunctionExtern() {
extern int countExtern;
countExtern++;
printf("Extern: Function called %d times\n", countExtern);
}
int countExtern = 0;
int main() {
counterFunctionStatic();
counterFunctionStatic();
counterFunctionStatic();
counterFunctionAuto();
counterFunctionAuto();
counterFunctionRegister();
counterFunctionRegister();
counterFunctionExtern();
counterFunctionExtern();
counterFunctionExtern();
return 0;
}
