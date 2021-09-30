#include<stdio.h>
#include<windows.h>

int main()
{
    int d=1000;
    int hrs,mins,secs;
    printf("Enter current time(hh mm ss) : ");
    scanf("%d%d%d",&hrs,&mins,&secs);
    if((hrs<1&&hrs>12)||mins>59||secs>59)
    {
        printf("Error !!!");
        return 0;
    }

    while(1)
    {
     if(secs>59) 
      {
          secs=0;
          mins++;
          
      }
      if(mins>59)
      {
          mins=0;
          hrs++;
      }
      if(hrs>12)
      {
          hrs=1;
      }
      secs++;
      printf("%02d:%02d:%02d",hrs,mins,secs);
      Sleep(d);
      system("cls");

    }
}