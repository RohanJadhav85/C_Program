// Create Array Without Initialization & Display All Elements

#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[5] = {10, 20, 0, 30, -6};

    printf("\n Value of 1 Element = %d .",Values[0]);
    printf("\n Value of 2 Element = %d .",Values[1]);
    printf("\n Value of 3 Element = %-2d .",Values[2]);
    printf("\n Value of 4 Element = %d .",Values[3]);
    printf("\n Value of 5 Element = %-2d .",Values[4]);


    getch();
    return 0;
}
