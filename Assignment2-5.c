//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-5.c 
// File Discription : Accept the number fro user and check whether number is even or odd 
// Author : Siddhesh Gunwant
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }

}

int mian()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Entre number");
    scanf("%d",&iValue);


    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("Number is Even",iValue);
    }
    else
    {
        printf("number is odd",iValue);
    }
    return 0;
}