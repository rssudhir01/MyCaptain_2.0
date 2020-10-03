#include <stdio.h>
#include <string.h>

struct Details
{
    char name[10];
    int age;
    char phonenumber[50];
    int salary;
};

struct Details details1[100];

void main()
{
    int n, i;

    printf("Enter the number of customers detail you wish to enter: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
       printf("Enter the %dst Employee Name: ", i);
       scanf("%s", details1[i].name);

        printf("Enter the %dst Employee age: ", i);
        scanf("%d", &details1[i].age);

        printf("Enter the %dst Employee Phone Number: ", i);
        scanf("%s", details1[i].phonenumber);

        printf("Enter the %dst Employee Salary: ", i);
        scanf("%d", &details1[i].salary);
    }
    printf("\tS.No\t\tName\t\tAge\t\tPhone Number\t\tSalary\n\n");
    for(i = 1; i <= n; i++)
    {
        printf("\t%d\t\t%s\t\t%d\t\t%s\t\t%d\n", i, details1[i].name, details1[i].age, details1[i].phonenumber, details1[i].salary);
    }

    return 0;
}
