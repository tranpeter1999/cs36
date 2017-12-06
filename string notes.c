/*
Strings

String is a null terminated array

char str[6] = "Hello";  // |H|e|l|l|o|null|
char str[10] = "Hello"; // |H|e|l|l|o|null|null|null|null|null|

//INCORRECT
scenario 1

	char str[3];
	str = "Hello";

	why? array is initialized with too little elements

	initialization cannot expand from declaration

scenario 2
	char str2, str1[3] = "Hi";
	str2 = str1;
	
	why? must use string copy
	
How to read strings
3 ways
	scanf(); //blank space terminates
	gets();  //fflush
	
	and
	
	getchar(); getch*(); getche();
*/

i = 0;
ch = getchar();
while(ch != '*')
{
	str[i] = ch;
	i++;
	ch = getchar();
}

str[i] = '\0';

/*
	
Writing strings
	print();   -> printf("%s",str);
	puts();    -> puts(str); //automatically puts new line
	
	and
	
	putchar(); -> put one character at a time
*/

i = 0;
while(str[i] != '\0')
{
	putchar(str[i]);
	i++;
}

/*
Final length of string
*/

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, length;

	printf("Enter a string\n");
	gets(str);

	while(str[i] != '\0')
		i++;

	length = i;

	printf("The length of string is: %d",length);

	return 0;
}

/*
Converting strings to uppercase
HINT: Use ASCII table
*/

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, length;

	printf("Enter a string\n");
	gets(str);
	
	while(str[i] != '\0')
		i++;
	
	length = i;
	i = 0;

	while(i < length)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i]-32;
		}
		
		i++;
	}

	printf("The new string is %s",str);

	return 0;
}

/*
LAB EXERCISES

Lab 1
Write a program to read and print the text until * is encountered. Also count characters in text

Output
Enter * to end
Enter text. Hi there
The text is Hi there
The count is 8 characters
--------------------------
Lab 2
Write a program to read a sentence, then count the number of words in sentence

Output
Enter sentence: How are you?
The word count is 3
--------------------------
Lab 3
Write a program to enter a text that has commas. Replace commas with semi colons

Output
Enter the text: Hello, how are you?
The new text is Hello; how are you?
--------------------------
Lab 4
Find if string is a palindrome
--------------------------
Lab 5
Enter a text, enter a pattern, find number of repeated pattern
*/

//LAB 1

#include<stdio.h>

int main()
{
	printf("Enter text. ");
	
	int i = 0;
	char ch = getchar();
	char str[100];
	
	while(ch != '*')
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	
	str[i] = '\0';
	
	printf("The text is %s\n",str);
	
	printf("The count is %d characters\n",i-1);
}

//LAB 2

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, length, count = 1;

	printf("Enter a string\n");
	gets(str);

	while(str[i] != '\0')
		i++;

	length = i;
	i = 0;

	while(i < length)
	{
		if(i > 0 && str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
			count++;

		i++;
	}

	if(length == 0)
		count = 0;

	printf("The number of words is %d",count);

	return 0;
}

//LAB 3

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, length;

	printf("Enter a string\n");
	gets(str);
	
	while(str[i] != '\0')
		i++;
	
	length = i;
	i = 0;

	while(i < length)
	{
		if(str[i] == ',')
			str[i] = ';';
		
		
		i++;
	}

	printf("The new string is %s",str);

	return 0;
}

//LAB 4

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, length, isPalindrome = 1;

	printf("Enter a string\n");
	gets(str);

	while(str[i] != '\0')
	{
	    if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i]-32;
		}
		i++;
	}

	length = i;

	while(i > length/2)
	{
		if(str[i-1] != str[length-i])
			isPalindrome = 0;
        i--;
	}

	if(isPalindrome == 1)
		printf("Your string is a palindrome!");
	else
		printf("Your string is not a palindrome!");

	return 0;
}


//LAB 5

#include<stdio.h>

int main()
{
	char str[100], pat[100];
	int i = 0, z = 0, length, patLength, count = 0;

	printf("Enter a string\n");
	gets(str);

	fflush(stdin);

	printf("Enter a pattern\n");
	gets(pat);

	while(str[i] != '\0')
	{
	    if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i]-32;
		}
		i++;
	}

	length = i;

	i = 0;

	while(pat[i] != '\0')
	{
	    if(pat[i] >= 'a' && pat[i] <= 'z')
		{
			pat[i] = pat[i]-32;
		}
		i++;
	}

	patLength = i;

	i = 0;

	while(i < length)
	{
		int match = 1;

		if(patLength > 0)
        {
            for(z = 0; z <= patLength-1; z++)
            {
                if(str[i+z] != pat[z])
                    match = 0;
            }

            if(match == 1)
            {
                count++;
            }
        }

		i++;
	}

	printf("The number of repeated patterns is %d",count);

	return 0;
}

/*
String Functions

strcpy - String copy
	strcpy(name1,name2); //copies name2 to name1
	
strncpy - String n copy
	strncpy(name1, name2, 10); //copies first 10 characters from name2 to name1
	
strcat - join strings
	strcat(s1,s2); //put strings together into one string
	
s1 = "Joe Blow"
s2 = "is a pumpkin"

strcat(s1,s2);

-> "Joe Blowis a pumpkin"

^^^ NO SPACE!

To get a space

s1 = "Joe Blow"
s2 = "is a pumpkin"

strcat(s1," ");
strcat(s1,s2);

strncat - join n char from string
	strncat(s1,s2,5); //concatenate first 5 characters of s2 to end of s1
	
strcmp - compare strings
	strcmp(name1,name2); //return 0, name1 == name2; return +, name1 > name2; return -, name1 < name2
	
"RUTH" < "SPOT" //cannot be used to compare strings, so use strcmp();
"Spot" > "SPOT"

strncmp - compare n chars from strings
	strncmp(name1,name2,3); //compares only the first n chars

strlen - calculate string length
	strlen(str); //returns length of string
	
char name[30] = "Ruth";
int l = strlen(name);

//l = 4

preprocessor directive
#include<string.h>
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char names[5][10];
	int r;

	//load array
	for(r = 0; r < 5; r++)
	{
		printf("Enter a name\n");
		gets(names[r]);
	}

	//sort array
	int j;
	char t[10];
	for(r = 0; r < 4; r++)
	{
		for(j = 0; j < 4; j++)
		{
			if(strcmp(names[j],names[j+1]) > 0)
			{
				strcpy(t,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],t);
			}
		}
	}

	printf("List of Names\n--------------------\n");

	for(r = 0; r < 5; r++)
		printf("%s\n",names[r]);
	printf("\n\n");
}

//CONVERT ABOVE CODE TO FUNCTIONS

#include<stdio.h>
#include<string.h>

void load(char array[][10]);
void sort(char array[][10]);
void print(char array[][10]);

void main()
{
	char names[5][10];

	//load array
	load(names);

	//sort array
	sort(names);

	printf("List of Names\n--------------------\n");

	//print array
	print(names);

	printf("\n\n");
}

void load(char array[][10])
{
    int i;
	for(i = 0; i < 5; i++)
	{
		printf("Enter a name\n");
		gets(array[i]);
	}
}

void sort(char array[][10])
{
    int i,j;
	char t[10];
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(strcmp(array[j],array[j+1]) > 0)
			{
				strcpy(t,array[j]);
				strcpy(array[j],array[j+1]);
				strcpy(array[j+1],t);
			}
		}
	}
}

void print(char array[][10])
{
    int i;
	for(i = 0; i < 5; i++)
		printf("%s\n",array[i]);
}

//NOW LET THE USER ENTER NUMBER OF STUDENTS AND ENTER THEIR NAMES

#include<stdio.h>
#include<string.h>

void load(char array[][10],int);
void sort(char array[][10],int);
void print(char array[][10],int);

void main()
{
	int n;

	printf("Enter number of students\n");
	scanf("%d",&n);

	fflush(stdin);

	char names[n][10];

	//load array
	load(names,n);

	//sort array
	sort(names,n);

	printf("Student List\n--------------------\n");

	//print array
	print(names,n);

	printf("\n\n");
}

void load(char array[][10],int n)
{
    int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter student name: ");
		gets(array[i]);
	}
}

void sort(char array[][10],int n)
{
    int i,j;
	char t[10];
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			if(strcmp(array[j],array[j+1]) > 0)
			{
				strcpy(t,array[j]);
				strcpy(array[j],array[j+1]);
				strcpy(array[j+1],t);
			}
		}
	}
}

void print(char array[][10],int n)
{
    int i;
	for(i = 0; i < n; i++)
		printf("%s\n",array[i]);
}























