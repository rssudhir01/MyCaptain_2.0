#include <stdio.h>

main()
{
   int i, j;
   int n1, n2;
   int sum = 0;
   printf("Enter the no of rows: ");
   scanf("%d", &n1);

   printf("Enter the no of columns: ");
   scanf("%d", &n2);

   int val[n1][n2];

   printf("Enter the value of matrix: \n");

   for (i=0; i<n1; ++i)
   {
       for (j=0; j<n2; ++j)
       {
           printf("The value of [%d},[%d] : ", i,j);
            scanf("%d ", &val[i][j]);
       }
   }
   printf("\nThe values of %d x %d matrix are: \n", n1, n2);

   for (i=0; i<n1; ++i)
   {
       for (j=0; j<n2; ++j)
       {
           printf("%d ", val[i][j]);
       }
       printf("\n");
   }
   for (i=0; i<n1; ++i)
   {
       for (j=0; j<n2; ++j)
       {
           if (i == j)
           {
               sum = sum + val[i][j];
           }
       }
   }
   printf("The sum of diagonals : %d", sum);
}

/* It's a working code but when entering the elements of the matrix, after the entry of the first element.
You can enter the value of the second element directly as it does not show
"The value of [0][1]" statement. After passing value the value of the second element, it runs perfectly. */
