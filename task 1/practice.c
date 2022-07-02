#include <stdio.h>
#include <string.h>
struct Student
{
    char name[100];
    char reg_no[100];
    char stream[100];
}arr[100];
int main()
{
    struct Student t;
    int i = 0,j=0,n;
    printf("Enter number of students:");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Enter information of student %d:", i+1);
        printf("Name :");
        scanf("%s", &arr[i].name);
        printf("Reg_No :");
        scanf("%s", &arr[i].reg_no);
        printf("Stream :");
        scanf("%s", &arr[i].stream);

        i++;
    }

    printf("DATA\n");
    for(i=0;i<n;i++){
    printf("Name:%s\nReg_No:%s\nStream:%s\n",arr[i].name,arr[i].reg_no,arr[i].stream);
    printf("\n");
    }
    for (i = 0; i < n; i++)
    {
       for(j=i+1;j<n;j++){
           if(strcmp(arr[i].name,arr[j].name)>0){
               t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
       }
        
    }
    for(i=0;i<n;i++){
        printf("\nName: %s\nReg_No : %s\nStream : %s\n",arr[i].name,arr[i].reg_no,arr[i].stream);
    }
return 0;
}
