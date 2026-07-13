class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2] = {0};

        for (int s : students) {
            cnt[s]++;
        }

        int n = sandwiches.size();

        for (int i = 0; i < n; i++) {
            if (cnt[sandwiches[i]] == 0) {
                return n - i;
            }

            cnt[sandwiches[i]]--;
        }

        return 0;
    }
};