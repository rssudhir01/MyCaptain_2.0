#include <stdio.h>

main()
{
    int n;
    int i;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        for(i=2; i<n; ++i)
        {
            if (n%i == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d is a prime no", n);
        }
        else
        {
            printf("%d is not a prime no", n);
        }
    }
}
