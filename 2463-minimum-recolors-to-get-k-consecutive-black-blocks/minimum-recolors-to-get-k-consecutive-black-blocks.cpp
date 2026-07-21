class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //int ans=0;
        int cnt=0;
         string s="";
        for(int i=0;i<k;i++){
            s+=blocks[i];
            if(blocks[i]=='W') cnt++;
        }
        int ans=cnt;
        for(int i=k;i<blocks.length();i++){
            if(blocks[i]=='W') cnt++;
            if(blocks[i-k]=='W') cnt--;
            ans=min(ans,cnt);
        }
        return ans;
    }
};