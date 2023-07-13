//  Program To Print Tables in User Specified Range .C

#include<stdio.h>
#include<conio.h>

int main ()
{
    int R = 0, C = 0, S_pt = 0, E_pt = 0;

    printf("\n Enter Start Point : ");
    scanf("%d",&S_pt);
    printf("\n Enter End Point : ");
    scanf("%d",&E_pt);

    printf("\n ========================********************========================\n\n");

    for(R =1; R <= 10; R++)
    {
        for(C = S_pt; C <= E_pt; C++)
        {
            printf("%4d", R * C);
        }
        printf("\n");
    }

     printf("\n ========================********************========================\n\n");

    getch();
    return 0 ;
}

