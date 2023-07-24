//  Left Lower 1234 Pattern .C

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    int ch = 1;

    printf("\n ======================******************====================== \n\n");

    for(R = 1 ; R <= 5 ; R++)
    {
        for(C = 1; C <= R; C++)
        {
            printf(" %d ",ch);
            ch++;
        }
        printf("\n");
    }

    printf("\n ======================******************====================== \n\n");

    getch();
    return 0;

}

