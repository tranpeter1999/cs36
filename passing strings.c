/*
Strings

Strings are like arrays -> collection of same kind
	-can only be passed by reference
	-no & on the call function
	-char * in parameter list (int *, int *)
*/

#include<stdio.h>

void load(char *f, char *l)
{
	printf("Enter first name");
	gets(f);
	printf("Enter last name");
	gets(l);
}

void main()
{
	char first[15], last[30];
	load(first,last);
	printf("%s %s\n",first,last);
}

//---------------------------------------------------------------

//STOCK PROGRAM

/*
User input	-stock name
			-number of shares
			-buy price
			-current price
			
Calculate 	-buy total (sum of buy price)
			-current total (sum of currnet price)
			-profit (current total - buy total)
			
Print		-name of stock
			-buy total
			-current total
			-profit
*/

#include<stdio.h>


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
