//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-4.c 
// File Discription : Accept two no from user and display first number in second number of times
// Author : Siddhesh Gunwant
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo,int frequency)
{
    int iCnt=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <= iNo;iCnt++)
    {
        printf("%d",frequency);
    }


}
int main ()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return 0;
}