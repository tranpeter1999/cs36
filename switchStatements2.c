#include <stdio.h>

int main ()
{
 char c;
 printf("Enter a character:");
 scanf("%c",&c);

 switch (c)
 {
case 'g':
case 'G': printf("Good\n");
        break;

case 'f':
case 'F': printf("Fair\n");
        break;
case 'b':
case 'B': printf("Bad\n");
        break;

    default: printf("Invalid\n");
 }
return 0;
}
