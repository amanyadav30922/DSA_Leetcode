// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currSum=0,maxSum=INT_MIN;
//         for(int val:nums){
//             currSum+=val;
//             maxSum=max(currSum,maxSum);
//             if(currSum<0){
//                 currSum=0;
//             }
//         }
//         return maxSum;
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currsum=nums[0];
      int maxsum=nums[0];
      for(int i=1;i<nums.size();i++){
        currsum=max(nums[i],currsum+nums[i]);
        maxsum=max(currsum,maxsum);
      }
        return maxsum;
    }
};