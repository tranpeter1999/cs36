
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    //Declaration
    int c;
    float q,d,n,p;
    float fq,fd,fn,fp;
    float mon;
    char ini[4];

    //Input
    printf("Type in your 3 initials and press enter:\n");
    scanf("%s",&ini);
    printf("%s%,please enter your coin information.\n");
    printf("Number of %$ coins:");
    scanf("%d",&c);
    printf("Number of quarters:");
    scanf("%f",&q);
    printf("Number of dimes:");
    scanf("%f",&d);
    printf("Number of nickels:");
    scanf("%f",&n);
    printf("Number of pennies:");
    scanf("%d",&p);


    //Calculations
    fq=q*.25;
    fd=d*.1;
    fn=n*.05;
    fp=p*.01;
    mon=c+fq+fd+fn+fp;

    //Output
    printf("%ini Coint Credit:\n",ini);
    printf("Dollars:%0.0f\n",mon);
    printf("Change:%.2f cents\n",mon);
    return 0;
}
