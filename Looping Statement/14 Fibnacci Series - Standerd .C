//  Fibonacci Series - Stander_d .C

#include<stdio.h>
#include<conio.h>

int main()
{
       int Cnt = 0, N1 = 1, N2 = 0, N3 = 0;

    Up:
       printf("\n Enter Count to print Fibonacci Series = ");
       scanf("%d",&Cnt);

       if(Cnt <= 0)
       {
           printf("\n Invalid Count, Enter Positive Number");
           goto Up;
       }

       printf("\n Fibonacci Series is =>\n\n\t\t");

       while(Cnt > 0)
       {
           printf("%3d", N3);

           N3 = N1 + N2;
           N1 = N2;
           N2 = N3;
           Cnt--;
       }

       printf("\n Thanks!!!");

       getch();
       return 0;

}
