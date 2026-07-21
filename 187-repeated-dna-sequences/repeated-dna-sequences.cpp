class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        unordered_set<string> seen;
        unordered_set<string> repeated;

        vector<string> ans;

        for(int i=0; i+10<=s.length(); i++){

            string temp = s.substr(i,10);

            if(seen.count(temp)){
                repeated.insert(temp);
            }
            else{
                seen.insert(temp);
            }
        }

        for(auto x : repeated){
            ans.push_back(x);
        }

        return ans;
    }
};