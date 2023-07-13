// C.programming For. Cube

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cub = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    Cub = No * No * No;

    printf("\n Cube Of %d = %d.",No,Cub);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
