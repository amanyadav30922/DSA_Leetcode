// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         vector<int>ans;
//         for(int i=0;i<accounts.size();i++){
            
           
//             int sum=0;
//             for(int j=0;j<accounts[i].size();j++){
//                 sum+=accounts[i][j];
//             }
//             ans.push_back(sum);
//         }
//         sort(ans.begin(),ans.end());
//         return ans[ans.size()-1];
//     }
// };

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            mx = max(mx, sum);
        }

        return mx;
    }
};