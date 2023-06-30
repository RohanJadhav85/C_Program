//  printf & scanf .C

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Roll_No = 0;
    char Name[40] = "\0";
    char Course[20] = "\0";
    char City[20] = "\0";

    printf("\n ================== ************** ==================\n");
    printf("\n Enter Student Information => \n");

    printf("\n Enter Roll_No :");
    scanf("%d",&Roll_No);

    fflush(stdin);
    printf("\n Enter Student Name : ");
    scanf("%[^\n]",&Name);         /// gets (Name);

    fflush(stdin);
    printf("\n Enter Course Name : ");
    scanf("%[^\n]",&Course);          /// gets (Course);

    fflush(stdin);
    printf("\n Enter Current City : ");
    scanf("%[^\n]",&City);           /// gets (City);

    printf("\n ================== ************** ==================\n ");

    printf("\n\n Student Information Entered By You is => \n");

    printf("\n\t Roll_No. = %d.",Roll_No);
    printf("\n\t Name.    = %s.",Name);
    printf("\n\t City.    = %s.",City);
    printf("\n\t Course.  = %s.",Course);


     printf("\n\n\n ================== ************** ==================\n\n\n ");

     getch();
     return 0 ;


}
