class MyQueue {
private:
    stack<int> input;   // For push operations
    stack<int> output;  // For pop/peek operations
    
public:
    MyQueue() {}
    
    // Push element to the back of queue
    void push(int x) {
        input.push(x);
    }
    
    // Removes the element from front of queue and returns it
    int pop() {
        if(output.empty()) {
            // Transfer all elements from input to output (reverses order)
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        
        int val = output.top();
        output.pop();
        return val;
    }
    
    // Get the front element
    int peek() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    // Return whether the queue is empty
    bool empty() {
        return input.empty() && output.empty();
    }
};