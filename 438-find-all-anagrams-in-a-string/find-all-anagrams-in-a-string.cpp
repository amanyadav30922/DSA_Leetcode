class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=s.size();
        int m=p.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(n<m) return ans;
        for(char c:p){
       freq1[c-'a']++;
        }
        for(int i=0;i<m;i++){
            char c=s[i];
            freq2[c-'a']++;}
            if(freq1==freq2) {
                ans.push_back(0);
            }
        
        for(int i=m;i<n;i++){
            freq2[s[i]-'a']++;
            freq2[s[i-m]-'a']--;
            if(freq1==freq2){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};