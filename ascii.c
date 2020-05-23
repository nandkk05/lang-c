#include <stdio.h>

int main()
{
    char c;
    printf("Enter the Character: ");
    scanf("%c", &c);

    // printing the value of character in ASCII 
    printf("ASCII value of the %c = %d", c, c);
    return 0;
}