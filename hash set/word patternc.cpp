class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>m1;
        map<string,char>m2;
        stringstream str(s);
        string word;
        vector<string> words;
        while(str>>word){
            words.push_back(word);
        }
        if(pattern.size()!=words.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            if (m1.find(pattern[i])!=m1.end()){
                if (m1[pattern[i]]!= words[i])return false;
            }
            else if (m2.find(words[i])!=m2.end()){
                if (m2[words[i]]!=pattern[i])return false;
            }
            else{
                m1[pattern[i]]= words[i];
                m2[words[i]]=pattern[i];
            }
        }
        return true;
    }
};