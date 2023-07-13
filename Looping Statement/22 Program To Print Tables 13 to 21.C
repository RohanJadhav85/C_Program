// Program To Print Tables 13 to 21.C

#include<stdio.h>
#include<conio.h>

int main ()
{
    int R = 0, C = 0;

    printf("\n ========================********************========================\n\n");

    for(R =1; R <= 10; R++)
    {
        for(C = 13 ; C <= 21; C++)
        {
            printf("%4d", R * C);
        }
        printf("\n");
    }

     printf("\n ========================********************========================\n\n");

    getch();
    return 0 ;
}


