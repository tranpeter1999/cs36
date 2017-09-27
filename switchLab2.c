#include <stdio.h>

int main ()
{
    //Declaration
    int x;
    int y;
    //Input
    printf("Enter a number from 1 to 10:");
    scanf("%d",&x);


    //Calculations
    y=x%2;

    //Output
    switch (y)
    {

    case 0: printf("The number is Even.");
            break;
    case 1: printf("The number is Odd.\n");
            break;
    default: printf("Invalid!");

    }
return 0;
}
