//  getch getche getchar Demostration.C

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    ch = getchar(); // SNaMo

    putchar('Q');
    putchar('\n');
    putch('\t');

    putchar ('V');

    getche();

    putch(ch);

    getch();
    return 0;

}
