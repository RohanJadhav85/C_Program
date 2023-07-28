//  Create Accept Display Array Using Loop - With Macro ,Search Given Element in that Array & its Location if Found

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Src = 0, Num[size];

    for(i = 0; i < size ; i++)
    {
        printf("\n Enter %d Element => ",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n Enter Element to Be Searched =>");
    scanf("%d",&Src);

    for(i = 0; i < size ; i++)
    {
        if(Num[i] == Src)
        {
            break;
        }
    }
    if(i < size)
    {
        printf("\n Entered Element %d is Found At Location Number %d .",Src,i+1);
    }
    else
    {
        printf("\n Entered Element is Not Found in Any Location");
    }

    getch();
    return 0;
}
