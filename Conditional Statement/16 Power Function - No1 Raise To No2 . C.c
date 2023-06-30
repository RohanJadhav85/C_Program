// Power Function - No1 Raise To No2 . C


#include<stdio.h>
#include<conio.h>

int main ()
{
        int No1 = 0, No2 = 0, Pow = 0, Cnt = 0;

     Up:
        printf("\n Enter Base : ");
        scanf("%d",&No1);

        printf("\n Enter Exponent : ");
        scanf("%d",&No2);

        if(No1 < 0 || No2 < 0)
        {
            printf("\n Invalid Input, Enter a Positive Inputs..");
            goto Up;
        }
        else if (No1 == 0 || No1 == 1)
        {
            Pow = No1;
            goto Dwn;
        }

        for( Pow = 1, Cnt = No2; Cnt > 0; Cnt--)
        {
            printf("\n %d", Cnt);
            Pow = Pow * No1;
        }
    Dwn:
        printf("\n\n Result %d ^ %d = %d.",No1,No2,Pow);

        printf("\n Thanks!!!");

        getch();
        return 0 ;

}
