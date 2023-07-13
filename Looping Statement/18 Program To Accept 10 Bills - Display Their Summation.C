// Program To Accept 10 Bills - Display Their Summation.C

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0;
    float Bill = 0, Bill_Sum = 0 ;

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
         printf("\n\t Enter Bill No %d = ", Cnt);
         scanf("%f",&Bill);

         Bill_Sum = Bill_Sum + Bill;
    }

    printf("\n Summation of Given Bills = %0.2f",Bill_Sum);

    getch();
    return 0;
}
