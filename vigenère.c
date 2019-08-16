#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int shift (char c);
int main(int argc, string argv[])
 {
    if  (argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int k = atoi(argv[1]);
    int l = strlen(argv[1]);
    //a itertes over the second argument/keyword
    for (int j = 0; j < l; )
    {
        if (argv[1][j] >= 48 && argv[1][j] <= 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
       else
       { 
           int key = shift(argv[1][0]);
           string p = get_string("plaintext: ");
           printf("ciphertext: ");
           //i iterates over the plaintext 
           for (int i = 0, z=strlen(p); i<z; i++)
           {
               if (isupper(p[i]))
               {
                   printf("%c", ((p[i]+key-65)%26+65));
               }
               else if (islower(p[i]))
               {
                   printf("%c", ((p[i]+key-97)%26+97));
               }
               else 
               {
                   printf("%c", p[i]);
               }
           }
           printf("\n");
           return 0;
       }
        printf("\n");
 }}

int shift (char c)
{
    //if its an uppercase letter, 
    if (isupper(c))
    {
        return (c-65);
    }
    if (islower(c))
    {
        return (c-97);
    }
    return 0;
}
