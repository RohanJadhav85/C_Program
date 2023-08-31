#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int count = 0;
    char Name[20] = "";
    char SNm[20] = "";

    printf("\n Enter Name1 = ");
    gets(Name);
    printf("\n Enter Name2 = ");
    gets(SNm);

    count = strcmp(Name, SNm);

    printf("\n %d \n", count);

    if(count == 0)
    {
        printf("\n Both Strings Are Same.");
    }
    else
    {
        printf("\n Both Strings Are Different.");
    }

    getch();
    return 0;



}
