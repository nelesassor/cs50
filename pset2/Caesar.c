#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[] )
{
    if (argc != 2)
    {
        printf("Try again!");
    }

    int key = 0;
    key = (atoi(argv[1]) % 26);
    printf("%d\n",key);
    if (key < 0)
    {
        printf("Try again!");
    }
    string s;

    // convert string from command line into integer key

    s = get_string("Input: ");

    int i = 0;
    char n = strlen(s);

    for (i = 0; i <= n; i++)
{

    if (isalpha(s[i]))
    {
    if(islower(s[i]))
    {
        printf("%c", s[i] + key);
    }
    if(isupper (s[i]))
    {
        printf("%c", s[i] + key);
    }
    }

}
}



