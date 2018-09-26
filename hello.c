#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("Gib eine Zahl ein ");
int height;
do
height = get_int("Height: ");
while(height < 0 || height > 23);

for(int i = 1; i <= height; i++){

int x = height - i;
printf( "%.*s",x,"                                               " );
printf("%.*s",i,"#################################################");
printf(" ");
printf("%.*s",i,"#################################################");
printf("\n");
}}



//int height = 10
//int x = height- 1;
//printf(x times"- ")
// print # for left pyramid
//printf(i times "#")
// print gap
// print # for right pyramid
// print new line





//
//{
//printf("Hello, World! \n");
//int height = 10;
//int x = height- 1;
//printf("%.*s",x,"                ");


//printf("%.*s",x,"################");
//}

















