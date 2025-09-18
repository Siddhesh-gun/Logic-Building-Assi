//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-1.c 
// File Discription : Accept one no from user and print that number of * on screen 
// Author : SIddhesh Gunwant 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
        
    }
    


}
int main ()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}