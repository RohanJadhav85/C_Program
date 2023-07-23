
#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, X = 0;
    char i= 'A';

    printf("\n Enter Size For Pattern => ");
    scanf("%d",&X);

    printf("\n ======================******************====================== \n\n");

    for(R = 1, i = 'A'; R <= X; R++)
    {
        for(C = 1 ; C <= X ; C++)
        {
            if(R == C || R >= C)
            {
                printf(" %c ",i);
                i = i + 3;

                if(i > 'Z')
                {
                    i = 'A' + (i - 'Z')- 1;
                }
            }
            else
            {
                printf("   ");
            }
        }
         printf("\n");
    }

    printf("\n ======================******************====================== \n\n");

    getch();
    return 0 ;

}
