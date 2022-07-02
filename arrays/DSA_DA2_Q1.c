
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct node* createstudent(struct node*);
void display(struct node*);
void deletestudent(struct node **head_ref, int key);
 
struct node
{
char name[10];
int registration_no[10];
int age;
int phone_no;
 
struct node* next;
};
 
int main()
{
struct node* head;
int a, i;
 
 
int s;
 
head = NULL;
 
while(1)
{
printf("\n Enter the value\n1-> Enter the Student Details\n2->Deletion of Student details\n3->Display the Students details ");
scanf("%d",&a);
 
switch(a)
{
case(1):
printf("\nEnter the number of employee details you would like to enter\n");
scanf("%d",&i);
while(i>0)
{
head=createstudent(head);
i--;
}
break;
case(2):
printf("Enter the student registration number you want to del");
scanf("%d",&s);
deletestudent(&head, s);
break;
 
case(3): display(head);
break;
}
}
 
 
}
 
struct node* createstudent(struct node* head)
{
 
struct node* temp;
temp=(struct node*)malloc(sizeof (struct node));
 
printf("\nEnter the Student name \n");
scanf("%s",temp->name);
printf("\nEnter the Student registration number \n");
scanf("%d",temp->registration_no);
printf("\nEnter the Student's age \n");
scanf("%d",&temp->age);
printf("\nEnter the Student's phone number\n");
scanf("%d",&temp->phone_no);
 
if(temp == NULL)
{
printf("\n Enter the student \n");
temp->next=NULL;
}
 
else
{
temp->next=head;
 
}
return temp;
}
 
 
void deletestudent(struct node **head_ref, int key)
{
 
struct node* temp = *head_ref, *prev;
 
if (temp != NULL && temp->registration_no == key)
{
*head_ref = temp->next; // Changed head
free(temp); // free old head
return;
}
 
while (temp != NULL && temp->registration_no != key)
{
prev = temp;
temp = temp->next;
}
 
if (temp == NULL) return;
 
prev->next = temp->next;
 
free(temp);
}
void display(struct node* head)
{
if(head==NULL)
{
 
 
printf("\nThe node is yet to be displayed \n");
}
 
else
{
while(head!=NULL)
{
printf("\nThe name of the employee is %s\n",head->name);
printf("\nThe Registration number of Student %d\n",head->registration_no);
 
printf("\nStudent's Age %d",head->age);
 
printf("\nThe Student's phone number: %d\n",head->phone_no);
 
head=head->next;
 
}
}
}




