/*      Write a program to enter any ten numbers from user and show that in
            descending order  using selection sort. */

#include <stdio.h>
 void main ()
    {

        int number[30];
        int i, j, a, n;
        printf("Enter the count of value entering by you : ");
        scanf("%d", &n);

        printf("Enter %d numbers \n", n);
        for (i = 0; i < n; i++) {
	        scanf("%d", &number[i]);

        }
        /*  sorting begins ... */

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < n; ++i)
        {
            printf("%d\n", number[i]);
        }
            return 0;
    }
