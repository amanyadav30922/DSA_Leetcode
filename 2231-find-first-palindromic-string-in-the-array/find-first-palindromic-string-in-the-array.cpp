// class Solution {
// public:
// bool pal(string s){
//     int l=0,r=s.size()-1;
//     while(l<r){
//         if(s[l]!=s[r]){
//             return false;
//         }
//         l++;r--;
//     }
//     return true;
// }
//     string firstPalindrome(vector<string>& words) {
//         for(int i=0;i<words.size();i++){
//             if(pal(words[i])){
//                 return words[i];
//             }
//         }
//         return "";
//     }
// };


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            string t = s;
            reverse(t.begin(), t.end());
            if (s == t) return s;
        }
        return "";
    }
};