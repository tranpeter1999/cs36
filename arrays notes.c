/*
ARRAYS

	Arrays are a form of data structures
	They can only have data of the same type

		v name of aray
	int a[10] = {35,33,42,10,14,19,27,44,26,31};
	^ type ^ size           ^ elements in braces {}

	visualization
	 _____________________________
	|35|33|42|10|14|19|27|44|26|31|
	 _____________________________
	 ^ index = 0
	 
	Index starts from 0
	Array length stores the number of elements
	Each element is accessed via the index
	 
	For example, to access the value 10, use a[3]
	 
	int sum = a[3] + a[3];
	 
	printf("%d",sum); //prints 20
	 
	  Basic operations
	traverse   //go through elements
	insertion  //add an element at given index
	deletion   //remove an element at given index
	update     //change the value of the element at the given index

	What happens when you initialize an array?

	Datatype		Default value
	bool			false
	char			0
	int				0
	float			0.0
	double			0.0f

	bool a[3]; // = default values of {false, false, false}

TRAVERSE AND INSERTION
          0 1 2 3 4                                     0 1 2 3  4 5
	LA : |1|3|5|7|8| want to insert 10 to turn it into |1|3|5|10|7|8|
*/

#include<stdio.h>

int main()
{
	int LA[10] = {1,3,5,7,8};
	int item = 10, k = 3, n = 5;
    int i,j = n;

    printf("The original array elements\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    while(j>=k)
    {
        LA[j+1] = LA[j];
        j = j-1;
    }

    LA[k] = item;
    n = n+1;
    printf("Array after insertion\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    return 0;
}

/*
DELETION
          0 1 2 3 4                                    0 1 2 3
	LA : |1|3|5|7|8| want to delete 5 to turn it into |1|3|7|8|
*/

#include<stdio.h>

int main()
{
	int LA[5] = {1,3,5,7,8};
	int k = 3, n = 5;
    int i,j = k;

    printf("The original array elements\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    while(j<n)
    {
        LA[j-1] = LA[j];
        j = j+1;
    }

    n = n-1;
    printf("Array after deletion\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    return 0;
}

/*
UPDATE
          0 1 2 3 4                                    0 1 2  3 4
	LA : |1|3|5|7|8| want to update 5 to turn it into |1|3|10|7|8
*/

#include<stdio.h>

int main()
{
	int LA[5] = {1,3,5,7,8};
	int item = 10, k = 3, n = 5;
    int i,j = k;

    printf("The original array elements\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    LA[k-1] = item;

    printf("Array after update\n");

    for(i = 0; i < n; i++)
        printf("LA[%d] = %d\n",i,LA[i]);

    return 0;
}

/*
SEARCH
          0 1 2 3 4
	LA : |1|3|5|7|8| want to find the index with value 5
*/

#include<stdio.h>

int main()
{
	int LA[5] = {1,3,5,7,8};
	int item = 5, n = 4;
    int i,j = 0;

    while(j < n)
	{
		if(LA[j] == item)
			printf("Found element %d at index %d\n",item,j);
        j = j + 1;
	}

    return 0;
}

	

//LABS

/*
int a[10] = {1,2,3,4,5,6,7,8,9,10}
print the reverse
*/

#include<stdio.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;

	printf("The original array elements\n");

	for(i = 0; i < 10; i++)
        printf("a[%d] = %d\n",i,a[i]);

	printf("The array elements printed in reverse\n");

	for(i = 9; i > -1; i--)
        printf("a[%d] = %d\n",i,a[i]);
}

/*
Reverse the array
*/

#include<stdio.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i, temp;

	printf("The original array elements\n");

	for(i = 0; i < 10; i++)
        printf("a[%d] = %d\n",i,a[i]);

	for(i = 0; i < 5; i++)
	{
		temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}

	printf("The array elements of the reversed array\n");

	for(i = 0; i < 10; i++)
        printf("a[%d] = %d\n",i,a[i]);
}

/*
Calculate the sum and ave of the array
*/

#include<stdio.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i, sum;
	float ave;

	printf("The original array elements\n");

	for(i = 0; i < 10; i++)
	{
        printf("a[%d] = %d\n",i,a[i]);
		sum += a[i];
	}
	
	ave = (float) sum / 10;
	
	printf("The sum and ave are %d and %f\n",sum,ave);
}

/*
DATA STRUCTURES
1)arrays - collection of data of same type
2)struct - structure, allocation of different types

EXAMPLE
A book has a title, author, price, copies, e.t.c (string, string, float, int)
We want to store it all together, so we can't use an array

  
Pass arrays in functions
-pass by reference (like strings, because strings are arrays)
*/

#include<stdio.h>
#define size 5
			// v same as *a
void load(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
}

void print(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%d ",a[i]);
	printf("\n\n\n");
}

void sort(int a[], int n)
{
	int i,j,t;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
}

void main()
{
	int a[size];
	load(a,size);
	print(a,size);
	sort(a,size);
	print(a,size);
}

/*
2D ARRAYS
uses 2 subscripts

int a[4][3];
  row ^  ^ column
*/

#include<stdio.h>

void main()
{
	int b[2][3];
	int row,col;

	for(row = 0; row < 2; row++)
		for(col = 0; col < 3; col++)
		{
			printf("Enter a number ");
			scanf("%d",&b[row][col]);
		}

	for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
			printf("%d ",b[row][col]);
		printf("\n");
    }
}


/*
LABS

1) Write program to print largest and smallest number of array of at default 20 elements, with user size input (less than 20) and have user input array elements. After, print largest and position in array and smallest and position. Sort array in descending order and print

2) Find second largest number in array of numbers

3) Write program to find whether array of integers has duplicates. Duplicates or no? Print duplicates and position of duplicates
*/

#include<stdio.h>

void sort(int a[], int n)
{
	int i,j,t;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
			if(a[j] < a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
}

void main()
{
	int small, smallpos, large, largepos, size, i;

	printf("Enter an array size (less than or equal to 20)\n");
	scanf("%d",&size);

	if(size>20)
		size = 20;

	int a[size];

	for(i = 0; i < size; i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);

		if(i==0)
		{
			small = a[i];
			large = a[i];
			smallpos = i;
			largepos = i;
		}
		else
		{
			if(a[i] < small)
			{
				small = a[i];
				smallpos = i;
			}
			if(a[i] > large)
			{
				large = a[i];
				largepos = i;
			}
		}
	}

	printf("The largest number is %d at position %d\n",large,largepos);
	printf("The smallest number is %d at position %d\n",small,smallpos);

	sort(a,size);

	for(i = 0; i < size; i++)
		printf("%d ",a[i]);
}

//2

#include<stdio.h>

void sort(int a[], int n)
{
	int i,j,t;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
			if(a[j] < a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
}

void main()
{
	int secondlarge, secondlargepos, large, largepos, size, i;

	printf("Enter an array size (less than or equal to 20)\n");
	scanf("%d",&size);

	if(size>20)
		size = 20;

	int a[size];

	for(i = 0; i < size; i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);

		if(i==0)
		{
			secondlarge = a[i];
			large = a[i];
			secondlargepos = i;
			largepos = i;
		}
		else
		{
			if(a[i] > large)
			{
				secondlarge = large;
				secondlargepos = largepos;
				large = a[i];
				largepos = i;
			}
		}
	}

	printf("The largest number is %d at position %d\n",large,largepos);
	printf("The second largest number is %d at position %d\n",secondlarge,secondlargepos);

	sort(a,size);

	for(i = 0; i < size; i++)
		printf("%d ",a[i]);
}