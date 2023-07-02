class Solution {
public:
    bool isvo(char c){
        if(c=='a'|| c=='e'||c=='i' || c=='o'|| c=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(isvo(s[i])){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        int c=0;
        for(int i=0;i<k;i++){
            c+=v[i];
        }
        int mx=c;
        if(c==k) return c;
        int j=0;
        for(int i=k;i<v.size();i++){
            c+=v[i];
            c-=v[j];
            j++;
            mx=max(c,mx);
        }
        return mx;
    }
};