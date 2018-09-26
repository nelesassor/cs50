#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
int quarter = 25;
int ten = 10;
int five = 5;
int one = 1;


int change = 3;
do
change = get_float("Change: ");
while(change < 0);

int a = 0;

if (change >= quarter){
    a =  change / 25;
    change = change % 25;}

int b = 0;

if (change >= ten){
    b = change / 10;
    change = change % 10;}

int c = 0;

if (change >= five){
    c = change / 5;
    change = change % 5;}

int d = 0;

if (change >= one){
    d = change / 1;
    change = change % 1;}

printf("%d", a);
printf("%d", b);
printf("%d", c);
printf("%d", d);
}


