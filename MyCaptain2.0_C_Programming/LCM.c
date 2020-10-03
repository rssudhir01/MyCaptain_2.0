#include <stdio.h>

int lcm(int a, int b);
main()
{
    int n1,n2;

    printf("Enter the two numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("The LCM of %d and %d : %d", n1, n2, lcm(n1, n2));


}
lcm(int a, int b)
{
    int i = 2;
    int val;

    while(1)
    {
        if (i%a == 0 && i%b == 0)
        {
            val = i;
            break;
        }
        i++;
    }
    return val;
}
