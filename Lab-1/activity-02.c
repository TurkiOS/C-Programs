//Turki Al-Suhibani
//431107694

#include <stdio.h>
//Task 2.1 Add a new integer variable (v3)
// Task 2.3 Changing int to double
int main(){
double v1;
double v2;
double v3;
double result;

printf("Enter first number\n");
scanf("%lf", &v1);

printf("Enter second number\n");
scanf("%lf", &v2);

printf("Enter third number\n");
scanf("%lf", &v3);

result = v1 + v2 +v3;

printf("Result = %lf \n" , result);

//Task 2.2

result = (v1+v2)* v3;

printf("Result = %lf \n" , result);

}