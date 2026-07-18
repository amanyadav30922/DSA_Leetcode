// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {

//         double ans = INT_MIN;

//         for(int i = 0; i <= nums.size()-k; i++) {

//             int sum = 0;

//             for(int j = i; j < i+k; j++) {
//                 sum += nums[j];
//             }

//             double avg = (double)sum / k;

//             ans = max(ans, avg);
//         }

//         return ans;
//     }
// };

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxi=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxi=max(sum,maxi);
        }
        return (double) maxi/k;
    }
};