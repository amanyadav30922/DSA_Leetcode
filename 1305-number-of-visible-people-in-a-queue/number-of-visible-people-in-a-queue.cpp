// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& heights) {
//         vector<int>ans(heights.size());
//         for(int i=0;i<heights.size();i++){
//             int cnt=0;
//             for(int j=i+1;j<heights.size();j++){
//                 if(heights[j]>cnt){
//                     ans[i]++;

//                     cnt=heights[j];
                    
//                 }
//                  if (heights[j] > heights[i])
//                     break;
//             }
           
//         }
//         return ans;
//     }
// };


 class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
int n=heights.size();
vector<int>ans(n);
stack<int>st;
for(int i=n-1;i>=0;i--){
    while(!st.empty() && st.top()<heights[i]){
        ans[i]++;
        st.pop();
    }
    if(!st.empty())
    ans[i]++;
    st.push(heights[i]);
}

return ans;
    }
    };