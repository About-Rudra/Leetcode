class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        vector<int> ans(nums1.size(), -1);
        int n2 = nums2.size();

        for(int i = n2-1; i>=0; i--){
            int current = nums2[i];
            while(!st.empty() && st.top() <= current){
                st.pop();
            }

            if(st.empty()){
                mp[current] = -1;
            }else{
                mp[current] = st.top();
            }

            st.push(current);
        }

        for(int i = 0; i < nums1.size(); i++) {
            ans[i] = mp[nums1[i]];
        }

        return ans;
        
    }
};