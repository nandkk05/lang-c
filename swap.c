#include <stdio.h>

int main()
{
    int a,b, temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    //swapping the two numbers here
    temp = a;
    a = b;
    b = temp;

    //priting the swap values
    printf("After swapping the value of a is %d and b is %d", a, b);
}