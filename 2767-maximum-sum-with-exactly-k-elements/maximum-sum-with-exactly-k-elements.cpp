class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
    int score=0;
    int m=INT_MIN;
    for(int x:nums){
        m=max(x,m);
    }
    while(k--){
        score+=m;
        m++;
    }

    return score;
    }
};