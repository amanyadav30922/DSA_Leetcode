class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n > m)
            return false;

        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);

        // frequency of s1
        for(char c : s1)
            cnt1[c-'a']++;

        // first window
        for(int i=0;i<n;i++)
            cnt2[s2[i]-'a']++;

        if(cnt1==cnt2)
            return true;

        // slide window
        for(int i=n;i<m;i++){

            cnt2[s2[i]-'a']++;          // add new character
            cnt2[s2[i-n]-'a']--;        // remove old character

            if(cnt1==cnt2)
                return true;
        }

        return false;
    }
};