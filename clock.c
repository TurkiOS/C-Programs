#include <stdio.h>
#include <windows.h>
int main()
{
int h=0,m=0,s=0,start;
int d=1000; //This is for delay 1000 milliseconds.

printf("Type \'1\' to start...");


scanf("%d",&start);

if (start == 1)
{
 
while (1)
{
    s++;

    if(s>59){
        m++;
        s=0;
    }
    if (m>59)
    {
      h++;
      m=0;
    }
    if (h>12)
    {
      h=1;
    }
    printf("\n Clock :");
    printf("\n %02d:%02d:%02d",h,m,s); //%02d Will print 00:00:00 like digital clock.
    Sleep(d);
    system("cls"); //cls for clearing the page.
}
}
else{
  printf("Error!!");
  Sleep(d);
  exit(0);
}
}