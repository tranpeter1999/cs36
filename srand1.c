#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
int  a,b,c;
time_t t;

srand ((unsigned) time(&t));  //seeding

a=rand();
b=rand();
c=rand();

printf("%d %d %d\n",a,b,c);
return 0;
}
