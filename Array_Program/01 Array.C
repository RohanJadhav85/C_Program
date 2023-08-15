// 01 Array .C

#include<stdio.h>
#include<conio.h>

int main ()
{
     int iNum[5] = {10,55,88,15,3};

     printf("\n Value of 101 Elements = %d .",iNum[0]);
     printf("\n Value of 102 Elements = %d .",iNum[1]);
     printf("\n Value of 103 Elements = %d .",iNum[2]);
     printf("\n Value of 104 Elements = %d .",iNum[3]);
     printf("\n Value of 105 Elements = %d .",iNum[4]);

     getch();

     iNum[3] = 105;     /// 105

     iNum[4] = iNum[0];  /// 10

     iNum[0]++;         /// 11

     iNum[2] += 5;     /// iNum[2] = 88 + 5 // 93

     printf("\n\n\n ============================================== \n\n");

     printf("\n Value of 401 Elements = %d .",iNum[0]); // 11
     printf("\n Value of 501 Elements = %d .",iNum[1]); // 55
     printf("\n Value of 601 Elements = %d .",iNum[2]); // 93
     printf("\n Value of 701 Elements = %d .",iNum[3]); // 105
     printf("\n Value of 801 Elements = %d .",iNum[4]); // 10

     printf("\n\n Press any key to continue...");

     getch();
     return 0;

}

