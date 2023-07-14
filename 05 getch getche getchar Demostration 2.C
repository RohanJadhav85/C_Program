//  getch getche getchar Demostration 2.C

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n Enter A Letter :");

    ch = getche();

    printf("\n Welcome To Fork Infosystem!!!\n");

    printf("\n Value of Given Character = %c",ch);

    getche();
    _getch();

    return 0;
}
