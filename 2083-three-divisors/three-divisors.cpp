class Solution {
public:
int cnt=0;
    bool isThree(int n) {
        for(int i=1;i<=n;i++){
            if(n%i==0) cnt++;
        }
        if(cnt==3) return true;
        return false;
    }
};