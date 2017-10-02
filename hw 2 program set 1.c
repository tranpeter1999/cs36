/*
This program lets you bet on 2 dice
It rolls the dice and gets the sum
If the sum is 7 or 11, the user wins
If the sum is 2 or 12, the user loses
If the sum is anything else, the user gets their money back
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b,sum;
	time_t t;
	
	srand((unsigned) time(&t));
	
	a = rand() %6 + 1;
	b = rand() %6 + 1;
	
	sum = a + b;
	
	printf("Your sum is %d",&sum);
	
	switch(sum)
	{
		case 7: case 11: printf("You win!\n"); break;
		case 2: case 12: printf("You lose!\n"); break;
		case 1: case 3: case 4: case 5: case 6: case 8: case 9: case 10: printf("You get your money back!\n"); break;
		default: printf("Invalid\n");
	}
}
