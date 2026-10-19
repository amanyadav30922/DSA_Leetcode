class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int left=0;

        vector<int>freq(128,-1);
        for(int right=0;right<s.size();right++){
            if(freq[s[right]]>=left){
                left=freq[s[right]]+1;
            }
            freq[s[right]]=right;
            ans=max(ans,right-left+1);
        }
return ans;
    }
};