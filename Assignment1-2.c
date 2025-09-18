//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-2.c 
// File Discription : Program to print 5 times "Marvellous" on screen 
// Author : Siddhesh Gunwant 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void Display ()
{
    int i = 0 ;
    for( i = 1 ; i <=5 ; i++ )
    {
        printf(" %d : Marvellous \n",i);
    }
}

int main ()
{
    Display () ;

    return 0 ;
}