// Even Element.C

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i=0, Cnt=0, Arr[size];

      for(i=0; i<size; i++)
      {
          printf("\n Enter Element %d =>",i+1);
          scanf("%d",&Arr[i]);
      }

      getch();

      for(i=0; i<size; i++)
      {
          if(Arr[i] % 2 == 0)
          {
              Cnt++;
          }
      }

     printf("\n Count of Even Number in Given Array is : %d.",Cnt);

     getch();
     return 0;
}
