#include <cs50.h>
#include <stdio.h>

int main(void)
//prompt user for height
{
    int n;
    do 
    {
     n = get_int("Height: \n"); 
    } //i=rows n=height
    while (n<1 || n>8);
    //rows
    for (int i=0; i < n; i++)
    {
        //spaces
        for (int s=n-i; s>0;s--)
        {
            printf(" ");
        }
        //hashes
        for (int h=0; h-1<i;h++)
        {
            printf("#");
        }
        //next line
           printf("\n");
}}
