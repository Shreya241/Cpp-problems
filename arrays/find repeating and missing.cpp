vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int>ans;
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        if(v[A[i]]==0){
            v[A[i]]=1;
        }else{
            ans.push_back(A[i]);
        }
    }
    for(int i=1;i<v.size();i++){
        if(v[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}
