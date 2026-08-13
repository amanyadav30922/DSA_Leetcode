class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(string &a:words){
            for(string &b:words){
                if(a.size()<b.size() && b.find(a)!=string::npos){
                    ans.push_back(a);
                    break;
                }
            }
        }
        return ans;
    }
};