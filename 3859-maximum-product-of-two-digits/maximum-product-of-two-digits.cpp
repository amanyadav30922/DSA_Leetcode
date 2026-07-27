class Solution {
public:
    int maxProduct(int n) {
       /// int maxi=1;
        vector<int>ans;
        int x=n;
        while(n>0){
           int a=n%10;
            ans.push_back(a);
            n/=10;

        }
        sort(ans.begin(),ans.end());
        int m=ans.size();
        return ans[m-1]*ans[m-2];
    }
};