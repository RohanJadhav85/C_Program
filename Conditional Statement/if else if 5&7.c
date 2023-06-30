
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n Given no is Neutral");
    }
    else if(No % 5 == 0 && No % 7 == 0)
    {
        printf("\n Given no divided by 5 and 7");
    }
    else if(No % 7 == 0)
    {
        printf("\n Given no divided by 7");
    }
    else if(No % 5 == 0)
    {
        printf("\n Given no divided by 5");
    }
    else
    {
        printf("\n Given no neither divided 5 nor 7");
    }
        getch();
        return 0;

    }


