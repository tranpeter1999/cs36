//ODD OR EVEN

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num%2 == 0)
		printf("Number is even!");
	else
		printf("Number is odd!");
	
	return 0;
}

//VOWEL OR NOT

#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		print("Is a vowel!");
	else
		print("Is not a vowel!");
	
	return 0;
}

//LARGEST OF TWO

#include<stdio.h>

int main()
{
	int num,num2;
	printf("Enter two numbers: ");
	scanf("%d%d",&num,&num2);
	
	if(num == num2)
		printf("The numbers are equal!");
	else
		if(num > num2)
			printf("The larger number is %d",num);
		else
			printf("The larger number is %d",num2);
	
	return 0;
}

//POS, NEG, OR ZERO

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num == 0)
		printf("The number is 0");
	else
		if(num > 0)
			printf("The number %d is positive",num);
		else
			printf("The number %d is negative",num);
	
	return 0;
}