class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i = 0; i < tokens.size(); i++) {
           
            if(tokens[i] != "+" && tokens[i] != "-" && 
               tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            } else {
                
                int secondNum = st.top(); st.pop();
                int firstNum = st.top(); st.pop();
                
                if(tokens[i] == "+") st.push(firstNum + secondNum);
                else if(tokens[i] == "-") st.push(firstNum - secondNum);
                else if(tokens[i] == "*") st.push(firstNum * secondNum);
                else if(tokens[i] == "/") st.push(firstNum / secondNum);
            }
        }
        return st.top();
    }
};