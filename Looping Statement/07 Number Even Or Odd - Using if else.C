// Number Even or Odd - Using if else .c

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter An Integer Number = ");
    scanf("%d";&Num);

    if( Num == 0)
    {
         printf("\n Given Number is Natural.");
    }
    else if(Num % 2 == 0)
    {
        printf("\n Given Number is EVEN.");
    }
    else
    {
        printf("\n Given Number is ODD");
    }

    printf("\n Thanks!!!");

    getch();
    return 0;

}
