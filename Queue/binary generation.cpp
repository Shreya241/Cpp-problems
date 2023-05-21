#include<bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
    vector<string>v;
    queue<string>q;
    q.push("1");
	for(int i=1;i<=N;i++){
	    v.push_back(q.front());
	    q.push(q.front()+"0");

	    q.push(q.front()+"1");
	    q.pop();
	}
	return v;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
