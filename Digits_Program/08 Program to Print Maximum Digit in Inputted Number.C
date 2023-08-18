#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Max = 0;

    printf("\n Enter a Positive Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Max < Dig)
        {
            Max = Dig;
        }
        Temp = Temp / 10;
    }
        printf("\n Maximum Number in %d is = %d",No,Max);

        getch();
        return 0;
}
