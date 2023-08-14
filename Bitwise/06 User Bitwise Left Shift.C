#include<stdio.h>
#include<conio.h>
#define size 3

  int main()
{
  int Num[size] ={}, No =0 ,  Res = 0;

   printf("\n Enter 1st Number =>");
   scanf("%d",&No);


   printf("\n===================********************====================\n");

   Res = No << size;

   printf("\n Result => %d = %d",No,Res);

   printf("\n\n===================********************====================\n");

   getch();
   return 0;


}

