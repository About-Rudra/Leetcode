class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), -1);
        stack<pair<int, int>> st;

        for(int i = temperatures.size()-1; i>=0; i--){
            int currenttemp = temperatures[i];
            int days = 0;
            while(!st.empty() && st.top().first <= currenttemp){
                days ++;
                st.pop(); 
            }
            if(st.empty()){
                ans[i] = 0;
            }else{
                ans[i] = st.top().second - i;
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};