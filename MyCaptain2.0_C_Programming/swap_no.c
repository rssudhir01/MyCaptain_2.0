#include <stdio.h>

main()
{
    int a, b;
    printf("Enter the values of a and b:\n ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The order of the numbers : %d and %d\n", a,b);
    printf("The swapped order : %d and %d", b,a);
}
