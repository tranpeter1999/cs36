#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a number 1 to 10:");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
    case 2:
    case 3: printf("Low\n");
            break;

            case 4:case 5:case 6: case 7: printf("medium\n");
                break;

            case 8: case 9: case 10: printf("High\n");
            break;

            default: printf("Invalid\n");

    }
return 0;
}
