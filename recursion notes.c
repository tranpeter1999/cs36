/*
Recursion: when a function calls itself
a -> b -> c -> d //iterative
a -> a -> a -> a //recursive

When possible, prefer iterative to recursive -uses less memory and is faster

2 parts to recursive definition (recursion relation)

EXAMPLES
*/

//FACTORIAL

#include<stdio.h>

long fact(int n)
{
	if(n == 0)
		return 1;
	return n * fact(n-1);
}

void main()
{
	int n;
	long f;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	f = fact(n);
	
	printf("%d %ld\n",n,f);
}

// FIBONACCI SEQUENCE

#include<stdio.h>

long fibo(int pos)
{
	if(pos == 1 || pos == 2)
		return 1;
	if(pos > 2)
		return fibo(pos-2) + fibo(pos-1);
}

void main()
{
	int n;
	long f;
	printf("Enter a position: ");
	scanf("%d",&n);
	
	f = fibo(n);
	
	printf("Position: %d\nFibo: %ld\n",n,f);
}