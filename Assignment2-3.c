//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-3.c 
// File Discription : Accept one no from user if number is less than 10 then print "Hello" otherwise print "Demo"
// Author : Siddhesh Gunwant
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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