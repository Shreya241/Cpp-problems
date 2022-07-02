#include <stdio.h>
int n, graph[10][10], visit[10];

void DFS(int i)
{int j;
char charvalue = i + 65;
printf("\n%c", charvalue);
visit[i]=1;
for(j=0;j<n;j++)
if(!visit[j]&&graph[i][j]==1)
DFS(j);
}

int main(){
     printf("Enter vertices in the graph \n");
     scanf("%d",&n); //No of Vertices
     printf("\nEnter adjecency matrix of the graph:\n");
     for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     scanf("%d",&graph[i][j]);
     //visited set to 0
     for(int i=0;i<n;i++)
     visit[i]=0;
     printf("\nDFS: \n");
     DFS(0);
     return 0;}