#include <stdio.h>

int digit_sum(int num2);
int main()
{
    int num1;
    int total;
    printf("Enter the number: ");
    scanf("%d", &num1);
    total = digit_sum(num1);
    printf("Sum of the digits : %d", total);

    return 0;
}

digit_sum(int num2)
{
    int i = 0;
    int val;
    int sum = 0;
    while (num2 != 0)
    {
        val = num2 % 10;
        num2 = num2 / 10;

        i = i+1;
        sum = sum + val;
    }
    return sum;
}
