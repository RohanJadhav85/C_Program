//  Program To Accept 10 Number - Display Their Summation.C

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0, Num = 0;

    printf("\n How Many Numbers Do You Have = ");
    scanf("%d",&Num);

    for(Cnt = 1 ; Cnt <= Num ; Cnt++)
    {
          printf("\n\t Enter Number %d = ",Cnt);
          scanf("%d",&No);

          Sum = Sum + No;
    }

    printf("\n Summation of Given Number = %d ",Sum);

    getch();
    return 0;
}
