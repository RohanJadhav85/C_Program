// C.programming Enter Count INDIA . for

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0;

    printf("\n Enter count = ");
    scanf("%d",&Cnt);

    for(No = 1; Cnt > 0; No++, Cnt-- )
    {
        printf("\n %3d INDIA",No);
    }

    printf("\n Thanks!!!");

    getch();
    return 0;
}
