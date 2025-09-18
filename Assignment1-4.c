//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-4.c 
// File Discription : Accepts one number and check whether it is divisible by 5 or not
// Author : Siddhesh Gunwant
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int  iNo)
{

    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisibel by 5");
    }
    else
    {
        printf("Not Divisibel by 5");
    }
    return 0;
}