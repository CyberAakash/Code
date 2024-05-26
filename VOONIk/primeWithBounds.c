// Find the prime numbers with bounds given in C 

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, count = 0;
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            count++;
            printf(" %d ", i);
        }
    }
    printf("\nTotal prime numbers: %d ", count);

    return 0;
}