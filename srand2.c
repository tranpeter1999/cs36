#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d1,d2,sum;
    time_t t;
    srand((unsigned) time(&t));
    d1=rand() %6+1;
    d2=rand() %6+1;
    sum=d1+d2;
    printf("%d %d %d \n",d1,d2,sum);
    return 0;

}
