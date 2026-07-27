class Solution {
public:
    int maxProduct(int n) {
       /// int maxi=1;
        vector<int>ans;
        int x=n;
        while(n>0){
           
            ans.push_back(n%10);
            n/=10;

        }
        sort(ans.begin(),ans.end());
        int m=ans.size();
        return ans[m-1]*ans[m-2];
    }
};