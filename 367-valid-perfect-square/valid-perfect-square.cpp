class Solution {
public:
    bool isPerfectSquare(int num) {
        // int root=sqrt(num);
        // return 1LL *root*root==num;
        for(long long i=1;i<=num;i++){
            if(num==i*i){
                return true;
            }
        }
        return false;
    }
};