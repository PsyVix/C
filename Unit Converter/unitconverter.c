#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"units.h"
void main()
{
    int ch;
    while(1)
    {
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*                      MENU                         *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");
        printf("*                 1.Currency Conversion             *\n");
        printf("*                 2.Length Conversion               *\n");
        printf("*                 3.Weight Conversion               *\n");
        printf("*                 4.Temprature Conversion           *\n");
        printf("*                 5.Speed Conversion                *\n");
        printf("*                 6.Pressure Conversion             *\n");
        printf("*                 7.Power Conversion                *\n");
        printf("*                 8.Exit                            *\n");
        printf("*****************************************************\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        if (ch < 1 || ch >10 ) 
        {
            printf("Invalid Choice\n");
        return;
        }
        switch (ch)
        {
            case 1:currency();
                    break;
            case 2:length();
                    break;
            case 3:weight();
                    break;
            case 4:temp();
                    break;
            case 5:speed();
                    break;
            case 6:pressure();
                    break;
            case 7:power();
                    break;
            case 8:exit(0);
                   break;
            default:printf("Invalid Choice");
            }        
    }
}