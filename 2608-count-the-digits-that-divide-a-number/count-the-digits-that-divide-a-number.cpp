class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int a=num;
    while(num>0){
      int b=  num%10;
        if(a%b==0) cnt++;
        num/=10;
    }
    return cnt;
    }
};