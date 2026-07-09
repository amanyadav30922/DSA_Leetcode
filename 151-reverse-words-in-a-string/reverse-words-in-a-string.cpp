

// class Solution {
// public:
//     string reverseWords(string s) {

//         int left = 0, right = s.length() - 1;

//         // Reverse whole string
//         while (left < right) {
//             swap(s[left], s[right]);
//             left++;
//             right--;
//         }

//         int start = 0;

//         // Reverse each word
//         for (int end = 0; end <= s.length(); end++) {
//             if (end == s.length() || s[end] == ' ') {

//                 int l = start;
//                 int r = end - 1;

//                 while (l < r) {
//                     swap(s[l], s[r]);
//                     l++;
//                     r--;
//                 }

//                 start = end + 1;
//             }
//         }

//         // Remove extra spaces
//         string ans = "";
//         int i = 0;

//         while (i < s.length()) {

//             while (i < s.length() && s[i] == ' ')
//                 i++;

//             string word = "";

//             while (i < s.length() && s[i] != ' ') {
//                 word += s[i];
//                 i++;
//             }

//             if (!word.empty()) {
//                 if (!ans.empty())
//                     ans += " ";
//                 ans += word;
//             }
//         }

//         return ans;
//     }
// };

class Solution{
    public:
    string reverseWords(string s){
        vector<string>words;
        int n=s.size(),i=0;
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            string word="";
            while(i<n && s[i]!=' ') word+=s[i++];
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string result="";
        for(int j=0;j<words.size();j++){
            result+=words[j];
            if(j!=words.size()-1) result+=" ";
        } 
        return result;
    }
};