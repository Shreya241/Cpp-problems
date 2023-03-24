#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 void BFS(vector<int>adj[],int v){
    bool visited[v+1];
    for(int i=0;i<=v;i++){
        visited[i] = false;
    }
    queue<int>q;
    int s=1;
    visited[s]  = true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==false){
                visited[adj[u][i]]=true;
                q.push(adj[u][i]);
            }
        }
    }
 }


int main(){
    int v = 6;
    vector<int> adj[v + 1];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    BFS(adj, v);
	return 0;
}