// Count While Spaces in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Letter_Cnt = 0, i = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
         if(cSrc[i] == ' ')
         {
             Letter_Cnt++;
         }
         i++;
    }

    printf("\n Count of While Spaces in Given String is = %d.",Letter_Cnt);

    getch();
    return 0;
}

