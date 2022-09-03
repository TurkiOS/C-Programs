//Turki Al-Suhibani
//431107694

#include <stdio.h>

int main (void){

double a = 0.333 , PI = 3.14 , h , r1 , r2 , V;    

printf("V = 1/3 PI h (r1*r1 + r1 r2 + r2*r2) \n");

printf("Enter the value for height "); 

scanf("%lf",&h);

printf("Enter the value for radius 1 ");

scanf("%lf",&r1);

printf("Enter the value for radius 2 ");

scanf("%lf",&r2);

V =  a * PI * h *(r1*r1 + r1*r2 + r2*r2);

printf("the Volume is : %lf", V);

    return 0;
}