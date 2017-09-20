/*
match score

80-100     good
55-79      okay
1-54       moron
otherwise  invalid
*/

#include<stdio.h>

int main()
{
	int score;
	printf("Enter a score: ");
	scanf("%d",&score);

	if(score >= 80 && score <= 100)
		printf("Good\n");
	if(score >= 55 && score <= 79 )
		printf("Okay\n");
	if(score >= 1  && score <= 54 )
		printf("Moron\n");
	if(score <  1  || score >  100)
		printf("Invalid\n");
}

//COMMON MISTAKE

#include<stdio.h>

int main()
{
	int score;
	printf("Enter a score: ");
	scanf("%d",&score);

	if(score >= 80 && score <= 100)
		printf("Good\n");
	if(score >= 55 && score <= 79 )
		printf("Okay\n");
	if(score >= 1  && score <= 54 )
		printf("Moron\n");
	else
		printf("Invalid\n");
}

//this will print Good\nInvalid\n for score >= 80 && score <= 100 and Okay\nInvalid\n for score >= 55 && score <= 79

//PROPER IF ELSE
	
#include<stdio.h>

int main()
{
	int score;
	printf("Enter a score: ");
	scanf("%d",&score);

	if(score < 1 || score > 100)
		printf("Invalid\n");
	else
		if(score >= 80)
			printf("Good\n");
		else
			if(score >= 55)
				printf("Okay\n");
			else
				printf("Moron\n");				
					
	return 0;
}

/*
One line if

-only applies if you have 1 statement

if(h>40)       //h > 40?
	a = 10;    //if true, a = 10, end with colon
else           //h > 40 != true
	a = 20;    //a = 20, end with colon
	
ternary
*/

/*
"◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙"
"◙ ◙◙◙◙◙ ◙      ◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙      ◙◙◙◙◙◙◙ ◙◙◙◙◙ ◙      ◙     ◙◙ ◙◙◙◙◙◙     ◙◙      ◙"
"◙ ◙◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙ ◙◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙      ◙"
"◙ ◙◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙ ◙◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙    ◙◙"
"◙       ◙    ◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙ ◙◙◙◙◙ ◙ ◙◙◙◙ ◙     ◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙    ◙◙"
"◙ ◙◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙◙ ◙ ◙ ◙◙ ◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙  ◙◙◙"
"◙ ◙◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙◙ ◙ ◙ ◙◙ ◙◙◙◙ ◙ ◙◙◙◙ ◙ ◙◙◙◙◙◙ ◙◙◙◙ ◙◙◙◙◙◙◙◙"
"◙ ◙◙◙◙◙ ◙      ◙      ◙      ◙      ◙◙◙◙◙◙◙◙◙ ◙ ◙◙◙      ◙ ◙◙◙◙ ◙      ◙     ◙◙◙◙  ◙◙◙"
"◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙"
*/

