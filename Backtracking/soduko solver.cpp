#include <bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0  
#define N 9

class Solution 
{
    public:
    
    bool solve(int grid[N][N])
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j]==0)
                {
                    for(int c=1;c<=9;c++)
                    {
                        if(isValid(grid,i,j,c))
                        {
                            grid[i][j]=c;
                            if(solve(grid)==true)
                            return true;
                            else
                            grid[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
bool SolveSudoku(int grid[N][N])  
    { 
         solve(grid);
    }
    
bool isValid(int grid[N][N],int row,int col,int c)
    {
        for(int i=0;i<9;i++)
        {
            if(grid[i][col]==c) return false;
            if(grid[row][i]==c) return false;
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
        }
        return true;
    }
void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            cout<<grid[i][j]<<" ";
        }
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}