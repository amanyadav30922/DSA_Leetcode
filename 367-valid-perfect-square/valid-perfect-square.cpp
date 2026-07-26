class Solution {
public:
    bool isPerfectSquare(int num) {
        int root=sqrt(num);
        return 1LL *root*root==num;
    }
};