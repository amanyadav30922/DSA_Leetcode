class Solution {
public:
bool isgood(string s){
    unordered_set<char>seen;
    for(char ch:s){
        if(seen.count(ch)){
            return false;
        }
        seen.insert(ch);
    }
    return true;
}
    int countGoodSubstrings(string s) {
        int cnt=0;
        string str="";
        for(int i=0;i<s.length();i++){
            str+=s[i];
            if(str.length()==3){
                if(isgood(str)){
                    cnt++;
                }
                str.erase(0,1);
            }
        }
        
return cnt;
    }
};