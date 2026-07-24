class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        //int cnt=0;
        vector<int>freq(101,0);
        for(int x:nums){
            freq[x]++;

        }
        for(int x:nums){
            if(x%2==0 && freq[x]==1){
                return x;
            }
        }
       
        
        return -1;
    }
};