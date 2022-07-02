#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct representative{
 char name[100]; 
 int age;
 char product[100];
 int years;
 
};
int main(){
 struct representative names[100];
 struct representative temp;
 int n,i,age,years,j,comp;
 char name[100];
 char product[100];
 printf("enter the number of representatives: ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("enter the name:");
 scanf("%s",name);
 strcpy(names[i].name,name);
 printf("enter the age:");
 scanf("%d",&names[i].age);
 printf("enter the product:");
 scanf("%s",product);
 strcpy(names[i].product,product);
 printf("enter the years experience:");
 scanf("%d",&names[i].years);
 }
 for(i=n-2;i>=0;i--){
 for(j=0;j<=i;j++){
 if(names[j].years>names[j+1].years){
 temp=names[j];
 names[j]=names[j+1];
 names[j+1]=temp;
 }
 }
 }
 printf("output based on years of experience in ascending order:\n");
 for(i=0;i<n;i++){
 printf("%s \n",names[i].name);
 }
 
 for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
 comp=strcmp(names[i].product,names[j].product);
 if(comp==0){
 printf("%s and %s have the same products",names[i].name,names[j].name);
 }
 else{
 printf("none");
 }
 }
 }
 return 0;
}
