/*
PASS BY VALUE
		PROS
arguments can be variables (int x)
can be literals (6)
pass expressions (x+1)

		CONS
copy data consumes storage
results in performance penalty, especially when the function is called many times

PASS BY REFERENCE
		PROS
the called function can change the value of the argument
arguments not copied into new variables, provides greater time and space efficiency
can return multiple values whereas return statement can only return one

		CONS
side effects, because arguments are passed using the address, it becomes difficult to tell if the argument is meant for input, output, or both

STORAGE CLASS

defines scope (visibility) and lifetime of variables and/or functions with a program

	C has four storage classes
auto	 - default storage class for variables in a block or function parameter
register - using register stored in CPU register instead of RAM
external - 

ex)
*/
auto int x;   // int x; <- also auto, since auto is default
/*

		AUTO
all local variables declared within a function belong to auto
should be declared at the start of function block after the brace
memory is automatically allocated upon entry, and freed automatically upon exit
scope is local to the block
auto is stored in primary memory (RAM)
if not initialized, contains garbage

		REGISTER
maximum variable size = size of register (CANNOT GO BEYOND)
cannot use unary operators because it does not have memory located associated with it
used for quick access to variable needed
programmer can suggest to the compiler to store the variable in the register
compiler can choose to store or not store in register depending on your hardware and implementation restrictions (rejected variables become auto)

ex)
*/
register int x; // stores in register instead of RAM
/*

*/

#include<stdio.h>

int exp(int a, int b);

int main()
{
	int a = 3, b = 5, res;
	res = exp(a,b);
	printf("%d to the power of %d = %d",a,b,res);
	return 0;
}

int exp(int a, int b)
{
	register int res = 1;
	int i;
	for(i = 1; i <= b; i++)
		res = res * a;
	return res;
}

/*
		EXTERNAL
is used to give a reference of a global variable that is visible to all program files
when there are multiple files in a program and you need to use a particular func or var in a file apart from where it is declared use extern
*/

//file1.c
#include<stdio.h>
#include<file2.c>

int x;
void print();
int main()
{
	x = 10;
	printf("x in FILE1 = %d",x);
	print();
	return 0;
}

//file2.c
#include<stdio.h>
extern int x;
void print()
{
	printf("x in FILE2 = %dx");
}

main()
{
	
}

/*
		STATIC
default storage class for global variables as auto is for local variables
lifetime over entire program
memory is allocated when the program begins running and freed when the program terminates
*/

static int x = 10;

/*
automatically initializes to default zero
only initialize once the to compile time when memory is allocated
*/

#include<stdio.h>

void print();
int main()
{
	printf("First call of print()\n");
	print();
	printf("Second call of print()\n");
	print();
	printf("Third call of print()\n");
	print();
	return 0;
}

void print()
{
	static int x;
	int y = 0;
	printf("Static integer variable x = %d\n",x);
	printf("Integer variable y = %d\n",y);
	x++;
	y++;
}