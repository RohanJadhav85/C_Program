#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, R = 0 , C = 0, X = 0, No1 = 1, No2 = 0, No3 = 0, i = 0;

    printf("\n Enter For Pattern Size => ");
    scanf("%d",&X);

    printf("\n============================********************============================\n");

    for(R = 1 ; R <= X; R++)
    {
        for(C = 1; C <= X; C++)
        {
            if(R >= C)
            {
                printf(" %4d ",No3);
                No3 = No1+No2;
                No1 = No2;
                No2 = No3;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n============================********************============================\n");

    getch();
    return 0;

}
