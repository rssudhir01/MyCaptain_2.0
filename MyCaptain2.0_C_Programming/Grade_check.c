
#include <stdio.h>
main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    printf("The marks you entered is : %d\n", marks);

    if (marks >= 85 && marks <= 100)
    {
        printf("The student's grade : Grade A");
    }
    else if (marks >= 70 && marks <= 84)
    {
        printf("The student's grade : Grade B");
    }
    else if (marks >= 55 && marks <= 69)
    {
        printf("The student's grade : Grade C");
    }
    else if (marks >= 40 && marks <= 54)
    {
        printf("The student's grade : Grade D");
    }
    else
    {
        printf("The student's grade : Grade F");
    }
}
