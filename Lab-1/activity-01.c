//Turki Al-Suhibani
//431107694

#include <stdio.h>

int main(void){
  
    printf("Hello, World! \n");

    printf("%d\n", 4+3);

    int age, nID ,sID;
    scanf("%d", &age);
    scanf("%d%d", &nID , &sID);

    char var1;
    printf("%llu\n", sizeof(var1));
    short var2;
    printf("%llu\n", sizeof(var2));
    int var3;
    printf("%llu\n", sizeof(var3));
    long var4;
    printf("%llu\n", sizeof(var4));
    double var5;
    printf("%llu\n", sizeof(var5));
    printf("%llu\n", sizeof(double));
    return 0;
}