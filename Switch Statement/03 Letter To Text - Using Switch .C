// Letter To Text - Using Switch .C

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 0;

    printf("\n Enter a Character =");
    ch = getche();

    switch(ch)
    {
        case 'A':
        case 'a':
                 printf("\n WELCOME");
                 break;

        case 'B':
        case 'b':
        case 'W':
                 printf("\n Good Bye");
                 break;

        case 'C':
        case 'c':
        case 'm':
        case 'K':
                 printf("\n Have A Nice Day");
                 break;
        case 'D':
        case 'd':
                 printf ("\n Good Day");
                 break;
        default :
                 printf("\n Invalid ");
                 break;
    }

    getch();
    return 0;


}
