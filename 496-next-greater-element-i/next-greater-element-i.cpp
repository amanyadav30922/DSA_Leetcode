
            class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++) {
            bool found = false;

            for(int j = 0; j < nums2.size(); j++) {

                // first find nums1[i] in nums2
                if(nums2[j] == nums1[i]) {
                    found = true;
                    continue;
                }

                // after found, search for next greater
                if(found && nums2[j] > nums1[i]) {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }

        return ans;
    }
};
           