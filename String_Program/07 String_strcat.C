#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName[20] = "";
    char LastName[20] = "";
    char Name[40] = "";

    printf("\n Enter First Name =");
    gets(FirstName);
    printf("\n Enter Last Name =");
    gets(LastName);

    getch();

    strcat(Name, FirstName);
    strcat(Name," ");
    strcat(Name,LastName);

    printf("\n FName  is    = %s.",FirstName);
    printf("\n LName  is    = %s.",LastName);
    printf("\n FullName Generated is = %s.",Name);

    getch();
    return 0;

}
