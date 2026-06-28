class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
       vector<vector<int>>ans;
       ans.push_back(intervals[0]);int cnt=0;
       for(int i=1;i<intervals.size();i++){
        vector<int>&last=ans.back();
        if(intervals[i][0]<last[1]){
            cnt++;
            last[1]=min(last[1],intervals[i][1]);
        }else{
            ans.push_back(intervals[i]);
            
        }
       }
return cnt;
    }
};