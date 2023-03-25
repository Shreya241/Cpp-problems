#include <bits/stdc++.h>
using namespace std;

void DFSrec(vector<int>adj[],int s,bool visited[]){
    visited[s] = true;
    for(int i=0;i<adj[s].size();i++){
        if(visited[adj[s][i]]==false){
            DFSrec(adj,adj[s][i],visited);
        }
    }
}

 void DFS(vector<int>adj[],int v){
    bool visited[v];
    int c=0;
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFSrec(adj,i,visited);
            c++;
        }
    }
    cout<<c<<endl;

 }

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int v = 5;
    vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);
    DFS(adj, v);
	return 0;
}