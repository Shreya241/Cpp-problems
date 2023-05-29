//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
	int minStepToReachTarget(vector<int>&k,vector<int>&t,int N)
	{
	  queue<pair<pair<int,int>,int>>q;
	  vector<vector<int>>vis(N+1,vector<int>(N+1,0));
	  int i=k[0],j=k[1];
	  int t1=t[0],t2=t[1];
	  q.push({{i,j},0});
	  vis[i][j]=1;
      int rx[]={2,1,-1,-2,-2,-1,1,2};
      int cy[]={1,2,2,1,-1,-2,-2,-1};
      while(!q.empty()){
          int r=q.front().first.first;
          int c=q.front().first.second;
          int d=q.front().second;
          q.pop();
          if(r==t1 && c==t2){
              return d;
          }
          
          for(int i=0;i<8;i++){
              int dx=r+rx[i];
              int dy=c+cy[i];
              
              if(dx>=0 && dy>=0 && dx<=N && dy<=N && vis[dx][dy]==0){
                  q.push({{dx,dy},d+1});
                  vis[dx][dy]=1;
              }
          }
      }
      return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Endsi