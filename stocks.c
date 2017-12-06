
#include<stdio.h>

void load(char *,int *,float *,float *);
void calc(int, float, float, float *, float *, float *);
void print(char *, float, float, float);

void main()
{
    char name[10];
    int n;
    float b,c,bt,ct,p;

    load(name,&n,&b,&c);
    calc(n,b,c,&bt,&ct,&p);
    print(name,bt,ct,p);
}

void load(char *name, int *n, float *b, float *c)
{
	fflush(stdin);
	printf("Please enter the name of your stock\n");
	gets(name);
	printf("How many shares?\n");
	scanf("%d",&*n);
	printf("What is the buy price?\n");
	scanf("%f",&*b);
	printf("What is the current price?\n");
	scanf("%f",&*c);
}

void calc(int n, float b, float c, float *bt, float *ct, float *p)
{
	*bt = n*b;
	*ct = n*c;
	*p = *ct-*bt;
}

void print(char *name, float bt, float ct, float p)
{
	printf("Stock name: %s\nBuy total: $%.2f\nCurrent total: $%.2f\nProfit: $%.2f\n",name,bt,ct,p);
}
