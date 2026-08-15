class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        bool hasnonzero=false;
        for(int x:nums){
            xr^=x;
            if(xr!=0){
                hasnonzero=true;

            }
        }
        if (xr != 0) {
            return n;
        }

        if (!hasnonzero) {
            return 0;
        }

        return n - 1;
    }
};