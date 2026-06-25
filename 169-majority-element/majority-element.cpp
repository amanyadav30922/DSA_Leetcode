// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int cnt = 0;
//         int el = 0;

//         for(int x : nums) {
//             if(cnt == 0) {
//                 el = x;
//                 cnt = 1;
//             }
//             else if(x == el) {
//                 cnt++;
//             }
//             else {
//                 cnt--;
//             }
//         }

//         return el;
//     }
// };

class Solution{
    public:
     int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int max=0;int ans=-1;
        for(auto it:mp){

if(it.second>max){
    max=it.second;
    ans=it.first;
}
        }
        return ans;
     }
};