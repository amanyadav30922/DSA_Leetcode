class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // Not a valid triangle
        if (nums[0] + nums[1] <= nums[2])
            return "none";

        // All sides equal
        if (nums[0] == nums[2])
            return "equilateral";

        // Exactly two sides equal
        if (nums[0] == nums[1] || nums[1] == nums[2])
            return "isosceles";

        // All sides different
        return "scalene";
    }
};