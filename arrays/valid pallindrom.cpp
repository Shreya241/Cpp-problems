class Solution {
public:
bool pali(string s){
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r) return true;
    else return false;
}
    bool isPalindrome(string s) {
        string p="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0'&& s[i]<='9')){
                p+=s[i];
            }
        }
        return pali(p);
    }
};