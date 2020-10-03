#include <stdio.h>
main ()
{
    int select;

    printf("Hey, What would you like to have ? \n");
    printf("1.Sandwich \n2.Pizza \n3.Burger \n4.French Fries \n5.Pasta \n");
    scanf("%d", &select);

    switch(select)
    {
        case 1: printf("Food Item - Sandwich\n");
        printf("Price - Rs 99");
        break;

        case 2: printf("Food Item - Pizza\n");
        printf("Price - Rs 129");
        break;

        case 3: printf("Food Item - Burger\n");
        printf("Price - Rs 199");
        break;

        case 4: printf("Food Item - French Fries\n");
        printf("Price - Rs 69");
        break;

        case 5: printf("Food Item - Pasta\n");
        printf("Price - Rs 89");
        break;

        default: printf("That's an invalid choice.");
    }


}
