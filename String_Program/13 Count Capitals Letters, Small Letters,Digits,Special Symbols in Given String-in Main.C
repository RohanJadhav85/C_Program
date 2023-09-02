// Count Capitals Letters, Small Letters,Digits,Special Symbols in Given String

#include<stdio.h>
#include<conio.h>

int main ()
{
    char cSrc[50] = {'\0'};
    int Cap_Cnt = 0, Sm_Cnt = 0, Dig_Cnt = 0, Sp_Cnt = 0, i = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
              Cap_Cnt++;
        }
        else if( cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
              Sm_Cnt++;
        }
        else if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
              Dig_Cnt++;
        }
        else
        {
            Sp_Cnt++;
        }
        i++;
    }

         printf("\n Count Capitals Letters in Given String is = %d.",Cap_Cnt);
         printf("\n Count Small Letters in Given String is    = %d.",Sm_Cnt);
         printf("\n Count Digits in Given String is           = %d.",Dig_Cnt);
         printf("\n Count of While Spaces in Given String is  = %d.",Sp_Cnt);

         getch();
         return 0;

}
