#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int p = 1; p <= 2 * i - 1; p++)
        {
            if (p == 1 || p == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        i++;
    }
    int s = n - 1;
    while (s < n)
    {
        if (s > 0)
        {
            for (int k = n - s; k >= 1; k--)
            {
                printf(" ");
            }
            for (int p = 1; p <= 2 * s - 1; p++)
            {
                if (p == 1 || p == 2 * s - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        s--;
    }
}