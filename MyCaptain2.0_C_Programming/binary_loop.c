#include <stdio.h>

main()
{
    int i,j,n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    printf("0");

    for (i=0; i<=n; ++i)
    {
        for (j=0; j<i; ++j)
        {
            printf("0");
            printf("1");
        }
        printf("\n");
    }
}
