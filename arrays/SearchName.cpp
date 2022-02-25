#include <stdio.h>
#include <string.h>

void search(int n, char name[100], char data[100][100])
{
    int i,c;
    printf("\nenter number of students : ");
    scanf("%d", &n);
    printf("\nEnter the names:");
    for (i = 0; i < n; i++)
    {
        scanf("%s",data[i]);
    }
    printf("\nEnter name to search : ");
    scanf("%s", name);
    for (i = 0; i < n; i++)
    {
        if (strcmp(data[i], name) == 0)
        {
            c=1;
            break;
        }
    }
    if (c = 1)
    {
        printf("\n Found at position %d ", i+1);
    }else{
        printf("Not present");
    }
}

int main()
{
    int n;
    char student[100], dataset[100][100];
    search(n, student, dataset);
}