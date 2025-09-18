//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-2.c 
// File Discription : Accept one no from user and print that number of * on screen 
// Author : Siddhesh Gunwnat
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo >0)
    {
        printf("*\n");
        iNo--;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}