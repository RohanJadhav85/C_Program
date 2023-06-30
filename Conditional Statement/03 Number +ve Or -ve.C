// Number +ve Or -ve .C

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter An Integer Number =");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\n Given Number is Natural");
    }
    else if(Num > 0)
    {
        printf("\n Given Number is Positive.");
    }
    else
    {
        printf("\n Given Number is Negative.");
    }

    getch();
    return 0;
}
