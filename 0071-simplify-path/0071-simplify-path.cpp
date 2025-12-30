class Solution {
public:
    string simplifyPath(string path) {

        int n = path.size();
        vector<string> st;   // use vector as stack
        string curr = "";

        // note: <= n is IMPORTANT to process last token
        for (int i = 0; i <= n; i++) {

            // when we hit '/' OR reach end of string
            if (i == n || path[i] == '/') {

                if (curr == "" || curr == ".") {
                    // ignore
                }
                else if (curr == "..") {
                    if (!st.empty()) {
                        st.pop_back();
                    }
                }
                else {
                    // valid directory
                    st.push_back(curr);
                }

                curr = "";  // reset token
            }
            else {
                curr += path[i];  // build token char by char
            }
        }

        // build final path
        string result = "/";
        for (int i = 0; i < st.size(); i++) {
            result += st[i];
            if (i != st.size() - 1) {
                result += "/";
            }
        }

        return result;
    }
};
