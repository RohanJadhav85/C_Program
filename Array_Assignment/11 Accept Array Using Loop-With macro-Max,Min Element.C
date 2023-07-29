// Accept Array Using Loop-With macro-Max,Min Element.C

#include<stdio.h>
#include<conio.h>
#difine Size 7

int main()
{
    int Num[Size] = {}, i = 0, Max = 0, Min = 0;

    printf("\n Enter Array Element => \n\n");

    for(i = 0; i < Size; i++)
    {
         printf("\n Enter Element [%d] = ",i+101);
         scanf("%d",&Num[i]);
    }

    system("cls");

    for(i = 0; i < Size; i++)
    {
         if((i == 0) || (Num[i] < Min))
         {
             Min = Num[i];
         }
         if((i == 0) || (Num[i] > Max))
         {
             Max = Num[i];
         }
    }

    printf("\n Maximum Element in Array is = %d.",Max);
    printf("\n Minimum Element in Array is = %d.",Min);

    printf("\n Thanks \n Press Any Key To Quit!!!");

    getch();
    return 0;
}
