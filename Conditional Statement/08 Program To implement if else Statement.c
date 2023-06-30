// Program To implement if else Statement

#include<stdio.h>
#include<conio.h>

int main()
{
    float Bill = 0.0;

    printf("\n Enter your Balance = ");
    scanf("%f", &Bill);

    if(Bill > 100 )
    {
        printf("\n Welcome, You Are Eligible.");
    }
    else
    {
        printf("\n Your Are Not Eligible.");
    }

    printf("\n\n Good Bye, Thanks For Visit.");

    getch();
    return 0;

}
