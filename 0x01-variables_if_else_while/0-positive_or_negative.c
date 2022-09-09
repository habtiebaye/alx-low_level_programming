#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char p = "is positive";
char n = "is negative";
char z = "is zero";
if (n>0)
{
return (p);
}
elseif (n=0)
{
return (z);
}
else 
{
return (n);
}
}
