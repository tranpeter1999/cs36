/*
Operator Review
Short-cut operators
*/

a = 0; 
b = 0; OR a = b = c = d = 0;
c = 0;
d = 0;


x = x + 2;   x += 2;
y = y - 5;   y -= 5;
y = 5 - y;   //no shortcut

a = a * 7;   a *= 7;
b = 6 / b;   //no shortcut
c = c / 12;  c /= 12;

/*
% operator
only works with int
*/

a = 5;
printf("%d\n",a % 3); //prints 2

/*
increment operators

++ = add one
-- = subtract one
*/

a++; //post increment
++a; //pre  increment
a--; //post decrement
--a; //pre  decrement

a = 5;
printf("%d\n",a++); //prints 5
printf("%d\n",a);   //prints 6

a = 5;
printf("%d\n",++a); //prints 6
printf("%d\n"),a);  //prints 6
printf("%d\n",a--); //prints 6
printf("%d\n"),a);  //prints 5
printf("%d\n",--a); //prints 4
printf("%d\n"),a);  //prints 4

/*
preprocessor directives

-start with #
-processed before program runs
- no ; at end of statement

3 directives

1) #include
	-loads in needed header file

2) symbolic constants
	- because text substitution is done before program runs
	- #define Num 10
*/

#include<stdio.h>
#define NUM 10
#define TAXRATE 8.75

int main()
{
	int a,b;
	float c,d;
	
	d = TAXRATE/100 * c;
	a = NUM + 3;
	c = c * TAXRATE/100);
}

//3) Macro-identifier for formula

#include<stdio.h>
#define SUM (a+b+c)
#define AVG SUM/(float)3

int main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	printf("The sum is %d\n",SUM);
	printf("The avg is %f\n",AVG);
	return 0;
}

//operator overloading

/*
if statements - decisions

for example
if(x > y)
{
	printf("Yes\n");
}

if(condition) <- evaluates to true or false
	printf("One statement");

if(condition)
{
	printf("Multiple ");
	printf("statements\n");
}

if(condition)
	printf("if statement");
else
	printf("else statement");

relational operators
== equality     15 == 15 //true
!= not equal
< less than
<= less than or equal
> greater than
>= greater than or equal



logical operators
! not
&& and
|| or

if(!(x==6))
	printf("x is not 6");

if(avg>=80&&avg<90)
	printf("You got a B\n");

if(num<1 || num>5)
	printf("Invalid\n");
*/