#include <stdio.h>
#include <string.h>

main()
{
    int i,j,k;
    char org[100];
    char rev[100];

    printf("Enter the string to be reversed: ");
    scanf("%s", org);
    printf("The string entered is %s\n", org);

    FILE *fp;

    fp = fopen("reverse.txt", "w");
    fprintf(fp, "Original string: ");
    fprintf(fp, "%s\n", org);

    for (i = 0; org[i] != '\0'; ++i);

    j = i-1;

    for (k = 0; k <= i-1; k++)
    {
        rev[k] = org[j];
        j--;
    }

    fprintf(fp, "Reversed string: ");
    fprintf(fp, "%s", rev);

    printf("The reversed string : %s", rev);
    fclose(fp);
}
