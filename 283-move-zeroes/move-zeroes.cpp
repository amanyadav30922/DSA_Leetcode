// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int a=nums.size();
//         vector<int>temp(a);
//         int j=0;
//         for(int i=0;i<a;i++){
//             if(nums[i]!=0){
//                 temp[j++]=nums[i];
//             }
           
//         }
//         while(j<a){
//             temp[j++]=0;
//         }
//         for(int i=0;i<a;i++){
//             nums[i]=temp[i];
//         }

//     }
// };


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i = 0; i < nums.size() ; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};