//Program To Print Table .C

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 0;

    printf("\n Enter a Number To Print its Table =");
    scanf("%d",&No);

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n %d.",(No * Cnt));
    }

    printf("\n Thanks!!!");

    getch();
    return 0;
}
