// Vowel or Consonant or Digit- Using If else ladder.C

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("\n\n VOWEL");
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n\n Consonant");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n\n Digit");
    }
    else
    {
        printf("\n\n Special Symbol");
    }

    getch();
    return 0;
}
