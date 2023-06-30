// Program To Implement if & else if

#include<stdio.h>
#include<conio.h>

int main()

{
    float Amount = 0.0;

    printf("\n Enter Your Account Balance = ");
    scanf ("%f",&Amount);

    if(Amount > 10000)
    {
        printf("\n\n\t WELCOME To Mall !!!\n");
        printf("\n\t You Are Prime Customer");
        printf("\n\t Go To Counter No 7 For Prime Offers\n");
    }
    else if(Amount >= 7000)
    {
        printf("\n\t WELCOME To Mall !!!\n");
        printf("\n\t You Can Enjoy Your Shops\n");
    }
    else if(Amount > 1000)
    {
        printf("\n\n\t WELCOME To Mall !!!\n");
        printf("\n\t You Can Shop At Ground Floor");
    }
    else
    {
        printf("\n\n\t Minimum Balance Required To Shop is 1000+.\n");
    }

    getch();

    printf("\n\n Thanks For Visit !!!");

    getch();
    return 0 ;



}
