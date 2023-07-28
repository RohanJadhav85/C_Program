// Accept Array Using Loop-With macro- User Specified Elements Count.C

#include<stdio.h>
#include<conio.h>
#define Size 7

int main()
{
    int Num[Size] = {}, i = 0, Cnt = 0 , Ele = 0 ;

    printf("\n Enter Array Element => \n\n");

    for(i = 0; i < Size; i++)
    {
         printf("\n Enter Element [%d] = ",i+101);
         scanf("%d",&Num[i]);
    }

    printf("\n Enter Element = ");
    scanf("%d",&Ele);

    for(i = 0; i < Size; i++)
    {
        if(Num[i] == Ele)
        {
            Cnt++;
        }
    }

    printf("\n %d Enter Element Count in Array is = %d.",Ele, Cnt);

    printf("\n Thanks \n Press Any Key To Quit!!!");

    getch();
    return 0;
}


