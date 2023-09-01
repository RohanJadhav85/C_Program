#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName[20] = "";
    char LastName[20] = "";
    char MiddleName[20] = "";
    char Name[40] = "";

    printf("\n Enter First Name =");
    gets(FirstName);
    printf("\n Enter Middle Name =");
    gets(MiddleName);
    printf("\n Enter Last Name =");
    gets(LastName);

    strcat(Name,FirstName);
    strcat(Name," ");
    strcat(Name,MiddleName);
    strcat(Name," ");
    strcat(Name,LastName);
    strcat(Name," ");

    printf("\n First Name Entered is = %s.",FirstName);
    printf("\n Middle Name Entered is  = %s.",MiddleName);
    printf("\n Last Name Entered is = %s.",LastName);
    printf("\n Full Name Generated is = %s.",Name);

    getch();
    return 0;

}
