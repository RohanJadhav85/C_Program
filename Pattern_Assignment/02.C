

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch = '\0';

    printf("\n============================********************============================\n");

    for(R = 1, ch = 'A'; R <= 5; R++)
    {
        for(C = 1; C <= 5; C++,ch++)
        {
            if( R >= C)
            {
                printf(" %c ",ch);
            }
        }
        printf("\n");
    }

    printf("\n============================********************============================\n");

    getch();
    return 0;

}

