#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0, X = 0, i = 0;

    printf("\n Enter For Pattern Size => ");
    scanf("%d",&X);

    printf("\n============================********************============================\n");

    for(R = 1 ; R <= X; R++)
    {
       for(C = 1 ; C <= X; C++)
       {
           if(R >= C)
           {
               printf(" Q ");
           }
       }
        printf("\n");
    }

    printf("\n============================********************============================\n");

    getch();
    return 0;

}

