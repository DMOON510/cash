#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //this is to make sure there's only 2 arguments; if not then start over
    if  (argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //convert the second argument string into an int 
    int k = atoi(argv[1]);
    //verify that argv[1] is an integer
    //variable l is the number of characters in the second argument
    int l = strlen(argv[1]);
    //should loop through the strings
    //i stands for the individual characters
    for (int i = 0; i < l; ++i)
    {
        //should loop through each character in argv[1]; if any of the characters are NOT digits, then it will not accept and will return back to the beginning
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
       else 
       {
       string s = get_string("plaintext: ");
       printf("ciphertext: ");
       //loop through each character of the user's input string
       for (int j = 0, p = strlen(s); j<p; j++)
       {
           //for each upper case letter
           if (isupper(s[j]))
           {
               //the number part makes sure it wraps aroudn properly
               printf("%c", (((s[j]+k)-65)%26)+65);
           }
           //for each lower case letter
           if (islower(s[j]))
           {
               //wrap around
               printf("%c", (((s[j]+k)-97)%26)+97);
           }
           //if its not a letter, just print the original 
           else
               printf("%c", s[j]);
                
       }
           printf("\n");
           return 0;
           }
    }
} 
  
