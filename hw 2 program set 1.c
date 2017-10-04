/*
This program lets you bet on 2 dice
It rolls the dice and gets the sum
If the sum is 7 or 11, the user wins
If the sum is 2 or 12, the user loses
If the sum is anything else, the user gets their money back
*/

//Peter Tran
//1104985
//Program : A game

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

	printf("Your sum is %d\n",sum);

	if(sum == 7 || sum == 11)
        printf("You win!\n");
    if(sum == 2 || sum == 12)
        printf("You lose!\n");
    if(sum > 0 && sum < 13 && sum != 2 && sum != 7 && sum != 11 && sum != 12)
        printf("You get your money back!\n");
    if(sum < 0 || sum > 12)
		printf("Invalid\n");

	return 0;
}

/* OUTPUT
Test 1

Your sum is 7
You win!

Process returned 0 (0x0)   execution time : 0.019 s
Press any key to continue.

Test 2

Your sum is 3
You get your money back!

Process returned 0 (0x0)   execution time : 0.008 s
Press any key to continue.

Test 3

Your sum is 12
You lose!

Process returned 0 (0x0)   execution time : 0.018 s
Press any key to continue.
*/
