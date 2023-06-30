// Program To Implement printf & scanf Function

#include<stdio.h>
#include<conio.h>

  int main()
  {
      int Num = 0;
      float Dist = 0.0;

      printf("\n Welcome To \"Karad\"!!!");

      printf("\n Value of Number = %d. \t Distance = %2.0f.", Num, Dist);

      getch();

      printf("\n\n Enter Number = ");
      scanf("%d",&Num);

      printf("\n Enter Distance = ");
      scanf("%f", &Dist);

      printf("\n Value of Number = %d. \t Distance = %0.2f.\a",Num , Dist);

      getch();
      return 0;




  }
