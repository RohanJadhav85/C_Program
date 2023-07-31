// Program to Accept & Display Element Using Loop-Using Macro Find Count of Zero.C

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Num[size]= {}, i= 0, Z_cnt = 0;

    printf("\n Enter Element => \n\n");

    for(i =0; i < size ; i++)
    {
          printf("\n Enter Element [%d] = ",i+101);
          scanf("%d",&Num[i]);
    }
    for(i =0; i < size ; i++)
    {
        if(Num[i] == 0)        ///Zero Finding Logic
        {
            Z_cnt++;
        }
    }

    printf("\n Zero Element Count in Array is = %d.", Z_cnt);

    printf("\n Thanks \n Press Any To Quit !!!");

    getch();
    return 0;

}
