#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	int n=arr.size();
    for(int i=0;i<n;i++){
		int s=arr[i][0];
		int e=arr[i][1];
		
		if(!ans.empty() && e<=ans.back()[1]){
			continue;
		}

		for(int j=i+1;j<n;j++){
			if(arr[j][0]<=e){
				e=max(e,arr[j][1]);
			}else{
				break;
			}
		}
		ans.push_back({s,e});
	}
	return ans;
}

//another optimised

#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	int n=arr.size();
    for(int i=0;i<n;i++){
		if(ans.empty()||arr[i][0]>ans.back()[1]){
			ans.push_back(arr[i]);
		}else{
			ans.back()[1]=max(ans.back()[1],arr[i][1]);
		}
	}
	return ans;
}