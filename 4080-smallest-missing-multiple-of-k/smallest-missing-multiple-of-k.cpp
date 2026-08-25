// class Solution {
// public:
//     int missingMultiple(vector<int>& nums, int k) {
//         //sort(nums.begin(),nums.end());
    
//         for(int i=k;i<100*k;i=i+k){
//             if(find(nums.begin(), nums.end(), i) == nums.end()){
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };

class Solution{
    public:
     int missingMultiple(vector<int>& nums, int k){
        unordered_set<int>st(nums.begin(),nums.end());
        int x=k;
        while(st.count(x)){
            x+=k;
        }
        return x;
     }
};