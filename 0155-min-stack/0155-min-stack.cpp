class MinStack {
    vector<int> st;
    vector<int> minstack;

public:
    MinStack() {
        
    }
    
    void push(int val) {

        st.push_back(val);

        if(minstack.empty()){
            minstack.push_back(val);
        }else{
            int currentmin = min(val, minstack.back());
            minstack.push_back(currentmin);
        }
        
    }
    
    void pop() {
        st.pop_back();
        minstack.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */