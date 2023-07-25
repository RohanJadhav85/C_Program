//  Create Array Without Initilization & Display All Elements

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {};

    printf("\n=====================================================\n\n");

    printf("\n Enter Value For Elements Number 1 => ");
    scanf("%d",&Num[0]);

    printf("\n Enter Value For Elements Number 2 => ");
    scanf("%d",&Num[1]);

    printf("\n Enter Value For Elements Number 3 => ");
    scanf("%d",&Num[2]);

    printf("\n Enter Value For Elements Number 4 => ");
    scanf("%d",&Num[3]);

    printf("\n Enter Value For Elements Number 5 => ");
    scanf("%d",&Num[4]);

    printf("\n=====================================================\n");

    printf("\n Value of 1 Element = %d .",Num[0]);
    printf("\n Value of 2 Element = %d .",Num[1]);
    printf("\n Value of 3 Element = %d .",Num[2]);
    printf("\n Value of 4 Element = %d .",Num[3]);
    printf("\n Value of 5 Element = %d .",Num[4]);

    printf("\n=====================================================\n\n");


    getch();
    return 0;


}
