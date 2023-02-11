#include <stdio.h>
#include <strings.h>
struct emp
{
    char name[30];
    char empid[30];
    char address[50];
    char ph[20];
} e[10];
int main()
{
    int i, n, j;
    printf("Enter number of workers: \n");
    scanf("%d", &n);
    printf("Enter name, emp id, address and phone number.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %s %s", e[i].name, e[i].empid, e[i].address, e[i].ph);
        for (j = 0; j < i; j++)
        {
            if (strcmp(e[i].ph, e[j].ph) == 0)
            {
                printf("Existing phone number.\n");
                i--;
                n--;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s %s %s %s\n", e[i].name, e[i].empid, e[i].address, e[i].ph);
    return 0;
}