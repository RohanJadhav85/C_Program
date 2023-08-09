// Left Upper Triangular Pattern .C

#include<Stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0 , Cnt = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&Cnt);

    printf("\n ================***************================\n\n");

    for(R = 1; R <= Cnt ;R++)
    {
        for(C = 1; C <= Cnt;C++)
        {
            if(R + C <=  Cnt + 1 )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
             printf("\n");

    }
    printf("\n ================***************================\n\n");

     getch();
     return 0;

}


