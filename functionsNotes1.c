/*
functions break up programs into modules
it makes it easier to manage and debug
code reuse

2 ways to write programs with functions

put functions first with main at the bottom

put main first follow by functions
must use prototype
*/

#include<stdio.h>

int a,b,c,sum;
float avg;

void load()
{
	printf("Enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
}

void calc()
{
	sum = a + b + c;
	avg = sum / (float) 3;
}

void print()
{
	printf("The 3 numbers are %d, %d, and %d\n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The avg is %f\n",avg);
}

int main()
{
	load();
	calc();
	print();
	
	return 0;
}

//PROTOTYPING EXAMPLE

#include<stdio.h>

int a,b,c,sum;
float avg;

//prototyping
void load();
void calc();
void print();

int main()
{
	load();
	calc();
	print();

	return 0;
}

void load()
{
	printf("Enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
}

void calc()
{
	sum = a + b + c;
	avg = sum / (float) 3;
}

void print()
{
	printf("The 3 numbers are %d, %d, and %d\n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The avg is %f\n",avg);
}

/*
A function can call any other function as long as it's not main
A function can also call itself >>> recursion!!!
*/
