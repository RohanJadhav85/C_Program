//  Factorial Of Given Number ... while

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0;
    long long int Fact = 0;

    printf("\n Enter a Number To Get its Factorial = ");
    scanf("%d",&No);             /// 5

    Temp = No;
    Fact = 1 ;

    while (Temp > 0)
    {
        Fact = Fact * Temp;
        Temp--;
    }

    printf("\n Factorial Of %d is =%lld.", No, Fact);

    getch();
    return 0;
}
