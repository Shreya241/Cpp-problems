class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>d,r;
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                d.push(i);
            }else{
                r.push(i);
            }
        }
        int n=s.size();
        while (!r.empty() && !d.empty()){
            if (r.front() < d.front()){
                r.push(n++);
            }
            else {
                d.push(n++);
            }
            r.pop(), d.pop();
        }
        return (r.empty()) ? ("Dire") : ("Radiant");
    }
};