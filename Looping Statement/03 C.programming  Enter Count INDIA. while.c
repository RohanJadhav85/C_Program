// C.programming  while

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 1;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    while( Cnt > 0)
    {
        printf("\n %3d INDIA",No);
        Cnt--;
        No++;
    }

    printf("\n\n Thanks!!!");

    getch();
    return 0;

}
