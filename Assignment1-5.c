//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-5.c 
// File Discription : Program to print 5 to 1 numbers on screen 
// Author : Siddhesh Gunwant 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
    int 
    iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main ()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}