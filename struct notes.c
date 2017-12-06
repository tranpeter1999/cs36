/*
Structures - struct

struct- can have different types
array - only one type of data

*do NOT use the same name for struct, variable in struct and define variables with some struct name
*/

struct student
{
	int i;
	...
}

/*
typedef

typedef int INTEGER;

typedef num = 10;
*/

typedef struct student
{
	int id;
	char name[20];
	char course[20];
	float fees;
};

student stud1;

//initializing struct

struct student
{
	int id;
	char name[20];
	char course[20];
	float fees;
} stud1 = {01,"Raul","CS",45000};

//OR

struct student
{
	int id;
	char name[20];
	char course[20];
	float fees;
};

struct student stud1 = {01,"Raul","CS",45000};

//COPYING STRUCTS

stud2 = stud1; //can't compare structs

//but can compare

stud2.fees = stud1.fees; //data

/*
Name:string
t1:  int
t2:  int
t3:  int
avg: float

^5 data members
*/

#include<stdio.h>

struct student
{
	char name[20];
	int t1,t2,t3;
	float avg;
};

void main()
{
	struct student s;
	printf("Enter name: ");
	gets(s.name);
	printf("Enter 3 scores: ");
	scanf("%d %d %d",&s.t1,&s.t2,&s.t3);
	s.avg = (s.t1 + s.t2 + s.t3)/(float) 3;
	printf("%s %d %d %d %f\n",s.name, s.t1, s.t2, s.t3, s.avg);
}

/*
LABS

Lab 1
Write a program using structure to find largest of 3 ints
*/

//LAB 1

#include<stdio.h>

struct numbers
{
	int a,b,c;
};

void main()
{
	struct numbers n;
	int largest;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&n.a,&n.b,&n.c);
	
	largest = n.a;
	
	if(n.b > largest)
		largest = n.b;
	
	if(n.c > largest)
		largest = n.c;
	
	printf("The largest number is %d",largest);
}

//LAB 2: Write a program to enter two points and calculate the distance between the two points
//OUTPUT
//Enter coords for p1: (x,y)
//Enter coords for p2: (x,y)
//The distance is: 

#include<stdio.h>
#include<math.h>

struct point
{
	int x,y;
};

void main()
{
	struct point p1;
	struct point p2;
	float d;

	printf("Enter the coords for p1\n");
	scanf("%d %d",&p1.x,&p1.y);

	printf("Enter the coords for p2\n");
	scanf("%d %d",&p2.x,&p2.y);

	printf("The coords for p1 are (%d,%d)\n",p1.x,p1.y);
	printf("The coords for p2 are (%d,%d)\n",p2.x,p2.y);

	d = sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2));

	printf("The distance is %f\n",d);
}

//NESTED STRUCTS

typedef struct
{
	char name[20];
	int type;
	float balance;
} bank.account;

bank.account account1,account2;

// VVVVVV

typedef struct
{
	struct name
	{
		char first[20];
		char mid[20];
		char last[20];
	} name;
	int type;
	float balance;
} bank.account;

bank.account account1;

printf("The first name of account1 is %s",account1.name.first);

//ARRAY OF STRUCTURES

struct student s[10];


//example

#include<stdio.h>

struct student
{
	char last[10], first[10];
	int t1,t2,t3;
	float average;
	char grade;
};

void load(struct student s[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter last name: ");
		gets(s[i].last);
		printf("Enter first name: ");
		gets(s[i].first);
		printf("Enter scores\n");
		scanf("%d %d %d",&s[i].t1,&s[i].t2,&s[i].t3);
		s[i].average = (s[i].t1 + s[i].t2 + s[i].t3)/(float) 3;

		if(s[i].average > 70)
			s[i].grade = 'P';
		else
			s[i].grade = 'F';
		fflush(stdin);
	}
}

void print(struct student s[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("    %s %s\n",s[i].first,s[i].last);
		printf("Test scores: %d, %d, %d\n",s[i].t1,s[i].t2,s[i].t3);
		printf("Average: %f\n",s[i].average);
		printf("Grade: %c\n",s[i].grade);
	}
}

void sort(struct student s[],int n)
{
	int i,j;
	struct student t;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(s[j].average < s[j+1].average)
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		}
	}
}

void pass(struct student s[],int n)
{
	int amount = 0,i;
	for(i = 0; i < n; i++)
	{
		if(s[i].grade == 'P')
			amount++;
	}
	printf("\nNumber of passes: %d",amount);
}

void main()
{
	int size;
	printf("Enter size of class: ");
	scanf("%d",&size);
	fflush(stdin);
	struct student s[size];
	load(s,size);
	sort(s,size);
	print(s,size);
	pass(s,size);
}


































