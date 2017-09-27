#include <stdio.h>

int main ()
{
    //Declaration
    int x;

    //Input
    printf("Enter a number:");
    scanf("%d",&x);


    //Calculations


    //Output
    switch (x)
    {

    case 1: printf("Sunday");
            break;
    case 2: printf("Monday");
            break;
    case 3: printf("Tuesday");
            break;
    case 4: printf("Wednesday");
            break;
    case 5: printf("Thursday");
            break;
    case 6: printf("Friday");
            break;
    case 7: printf("Saturday");
            break;
    default: printf("Invalid!");

    }
return 0;
}


/*
Enter a number:4
Wednesday
Process returned 0 (0x0)   execution time : 2.075 s
Press any key to continue.
*/

/*
Enter a number:1
Sunday
Process returned 0 (0x0)   execution time : 1.669 s
Press any key to continue.
*/

/*
Enter a number:7
Saturday
Process returned 0 (0x0)   execution time : 0.920 s
Press any key to continue.
*/


/*
Enter a number:20
Invalid!
Process returned 0 (0x0)   execution time : 2.808 s
Press any key to continue.
*/
