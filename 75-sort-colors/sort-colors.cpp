// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int cnt=0,cnt1=0,cnt2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0) cnt++;
//             if(nums[i]==1) cnt1++;
//             if(nums[i]==2) cnt2++;
            
//         }
//          int i = 0;

//         while (cnt--) nums[i++] = 0;
//         while (cnt1--) nums[i++] = 1;
//         while (cnt2--) nums[i++] = 2;
//     }
   
// };

//optimal approach
class Solution{
    public:
    void sortColors(vector<int>&nums){
    // int low=0,mid=0,high=nums.size()-1;
    // while(mid<=high){
    //     if(nums[mid]==0){
    //         swap(nums[mid],nums[low]);
    //         low++;mid++;
    //     }
    //     else if(nums[mid]==1){
    //         mid++;
    //     }
    //     else if(nums[mid]==2){
    //         swap(nums[mid],nums[high]);
    //         high--;
    //     }
    // }

    sort(nums.begin(),nums.end());
    }
};