class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
          int m=s.size();
          int n=p.size();
          if(m<n){
return ans;
          }
          vector<int>need(26,0);
          vector<int>window(26,0);
          for(char c:p){
            need[c-'a']++;
          }
          for(int i=0;i<m;i++){
            window[s[i]-'a']++;
            if(i>=n){
                window[s[i-n]-'a']--;
            }
            if(i>=n-1 && need==window){
                ans.push_back(i-n+1);
            }
          }
          return ans;
    }
    
};