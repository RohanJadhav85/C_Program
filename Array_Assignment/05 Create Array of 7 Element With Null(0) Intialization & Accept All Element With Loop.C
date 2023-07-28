// Create Array of 7 Element With Null(0) Initialization & Accept All Element With Loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i = 0;

    for(i = 0; i < 7 ; i++)
    {
        printf("\n Value of RollNo %d .",i+101,Arr[i]);
    }

    getch();

    printf("\n Enter Array Elements =>\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("\n Enter Element [%d] = ",i+101);
        scanf("%d",&Arr[i]);
    }

    for(i = 0; i < 7; i++)
    {
        printf("\n Value of RollNo %d = %d. ",i+501,Arr[i]);
    }
    printf("\n Press The Key To Continue...!");

    getch();
    return 0;
}
