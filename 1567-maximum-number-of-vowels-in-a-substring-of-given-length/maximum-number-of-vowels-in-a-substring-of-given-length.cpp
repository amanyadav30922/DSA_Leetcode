class Solution {
public:
bool vowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' ||ch=='o'|| ch=='u';
}
    int maxVowels(string s, int k) {
        int cnt=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            if(vowel(s[i])) cnt++;
        }
        maxi=cnt;
        for(int i=k;i<s.length();i++){
            if(vowel(s[i])) cnt++;
            if(vowel(s[i-k])) cnt--;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};