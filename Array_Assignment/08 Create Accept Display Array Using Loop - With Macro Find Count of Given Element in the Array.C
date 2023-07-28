// Create Accept Display Array Using Loop - With Macro Find Count of Given Element in the Array

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int Num[size] = {}, i = 0 , Cnt = 0, Ele = 0;

    for(i = 0; i < size ; i++)
    {
        printf("\n Enter %d Element =>",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n Enter Element To Find Its Count => ");
    scanf("%d",&Ele);

    for(i = 0; i < size; i++)
    {
        if(Num[i] == Ele)
        {
            Cnt++;
        }
    }
    printf("\n Entered Element %d Count in Array = %d",Ele,Cnt);

    getch();
    return 0;

}
