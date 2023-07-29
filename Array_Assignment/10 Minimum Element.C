// Minimum Element.C

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Min = 0, Arr[size];

     for(i = 0; i < size ; i++)
     {
         printf("\n Enter Element %d => ",i+1);
         scanf("%d",&Arr[i]);
     }
     getch();

     for(i = 0; i < size ; i++)
     {
         if(Arr[i] < Min)
         {
             Min = Arr[i];
         }
     }

     printf("\n Minimum Number in Given Array is : %d",Min);

     getch();
     return 0;
}

