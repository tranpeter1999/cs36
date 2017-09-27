/*
write the functions to
calc area of triangle
calc area of rectangle
input base and height
print area of triangle and rectangle
*/

float b,h,at,rt;

void calcTri()
{
	at = (b*h)/2;
}

void calcRec()
{
	rt = b*h;
}

void input()
{
	printf("Input a base and height\n");
	scanf("%f%f",&b,&h);
}

void print()
{
	printf("You entered %f for base and %f for height.\n",b,h);
	printf("The area of the triangle is %f.\n",at);
	printf("The area of the rectangle is %f.\n",rt);
}

int main()
{
	input();
	calcTri();
	calcRec();
	print();
	
	return 0;
}