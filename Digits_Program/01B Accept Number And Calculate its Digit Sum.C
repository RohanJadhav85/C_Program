#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, dSum = 0;

        printf("\n Enter a Positive Number = ");
        scanf("%d",&No);

        for(Temp = No; Temp > 0; Temp /= 10)
        {
            dSum += (Temp % 10);
        }

        printf("\n Digits Sum of %d is = %d.", No, dSum);

        getch();
        return 0;
}
