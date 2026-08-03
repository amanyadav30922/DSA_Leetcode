class Solution {
public:
    bool palindrome(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }

    void solve(int idx, string &s,
               vector<string> &path,
               vector<vector<string>> &ans) {

        // Base case
        if (idx == s.size()) {
            ans.push_back(path);
            return;
        }

        // Try every substring starting from idx
        for (int i = idx; i < s.size(); i++) {

            string temp = s.substr(idx, i - idx + 1);

            if (palindrome(temp)) {
                path.push_back(temp);

                solve(i + 1, s, path, ans);

                path.pop_back();   // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> path;

        solve(0, s, path, ans);

        return ans;
    }
};