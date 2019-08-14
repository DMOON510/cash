#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//this is the prototype: take single character as input, output the shift value (integer) for that character
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
    //j itertes over the second argument
    for (int j = 0; j < l; ++j)
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
               if (isupper(p[j]))
               {
                   printf("%c", (p[j]+key));
               }
               if (islower(p[j]))
               {
                   printf("%c", (p[j]+key));
               }
           }
       }
        printf("\n");
 }}

int shift (char c)
{
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

