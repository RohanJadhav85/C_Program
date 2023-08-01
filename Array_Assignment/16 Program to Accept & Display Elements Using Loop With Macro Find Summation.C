//Program to Accept & Display Elements Using Loop With Macro Find Summation

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Num[size] = {}, i = 0 , sum = 0;

    for(i=0; i<size; i++)
    {
        printf("\n Enter Element %d =",i+1);
        scanf("%d",&Num[i]);
    }

    for(i=0; i<size; i++)
    {
        sum = sum + Num[i];         // sum += Num[i];
    }

        printf("\n Summation of Given Array is %d.",sum);

        getch();
        return 0;
}
