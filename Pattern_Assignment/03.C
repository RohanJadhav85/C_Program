#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0 , X = 0;
    char i = 'A';

    printf("\n Enter For Pattern Size => ");
    scanf("%d",&X);

    printf("\n============================********************============================\n");

    for(R = 1; R <= X; R++)
    {
       for(C = 1 , i = 'A'; C <= X; C++, i++)
       {
           if(R >= C)
           {
               printf(" %c ",i);
           }
       }
        printf("\n");
    }
    printf("\n============================********************============================\n");

    getch();
    return 0;

}



