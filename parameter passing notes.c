/*
Global Variables
Determined outside the functions
Can be accessed anywhere in the program
*/

#include<stdio.h>

int a,b,c,sum;

/*
Scope - scope is from where you can use it
Scope of global variables = entire program

NO GLOBAL VARIABLES ALLOWED!

Why not? Side effects

Anyone can use the same variable name

Local Variables
Declared in variables
Can only be accessed in function where it's declared
Scope is the function it is declared in

Parameter
Value passed to a function so that the function can do its job	
Functions used to communicate to one another - parameter passing

Value parameter
Makes value first
Then passes a copy

Reference parameter (&*)
Two way communication
Shares memory
Used when function changes value of parameter

&* = pointers
*/

#include<stdio.h>

void load(int *a, int *b, int *c)
{
	printf("Enter 3 values");
	scanf("%d%d%d",&(*a),&(*b),&(*c));
}

void calc(int a, int b, int c, int *sum, float *avg)
{
	*sum = a + b + c;
	*avg = *sum / 3.0; 	// or / (float) 3
}

void print(int a, int b, int c, int sum, float avg)
{
	printf("The 3 values are %d %d %d \n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The avg is %f\n",avg);
}

int main()
{
	int a,b,c,sum;
	float avg;

	load(&a,&b,&c); // function calling
	calc(a,b,c,&sum,&avg);
	print(a,b,c,sum,avg);
	
	return 0;
}













