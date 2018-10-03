#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[] )
{
    argc = 2;
    string key;
    string s;

    key = argv[1];
    printf("%s",(string)key);


     s = get_string("Input: ");
     int i = 0;
     char n = strlen(s);
     int j = 0;


    for (i = 0; i <= n; i++)
    {
        j = j % strlen(argv[1]);

        if (isalpha(s[i]))
            {

            if (islower(s[i]))
            {
                printf("%c", ((s[i] -97) + ((key[j] - 97))% 26) + 97);
            }j++;
            }


            if (isupper(s[i]))
            {
                printf("%c", ((s[i] -65) + ((key[j] - 65))% 26) + 65);
            }j++;
    }
}










