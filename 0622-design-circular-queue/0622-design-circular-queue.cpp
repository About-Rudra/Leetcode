class MyCircularQueue {
private:
    vector<int> data;
    int front;      // Index of front element
    int rear;       // Index of rear element
    int size;       // Current number of elements
    int capacity;   // Maximum capacity
    
public:
    // Initialize with size k
    MyCircularQueue(int k) {
        data.resize(k);
        front = 0;
        rear = -1;  // Queue is empty initially
        size = 0;
        capacity = k;
    }
    
    // Insert an element at the rear
    bool enQueue(int value) {
        if(isFull()) {
            return false;
        }
        
        // Move rear circularly
        rear = (rear + 1) % capacity;
        data[rear] = value;
        size++;
        
        return true;
    }
    
    // Delete an element from the front
    bool deQueue() {
        if(isEmpty()) {
            return false;
        }
        
        // Move front circularly
        front = (front + 1) % capacity;
        size--;
        
        // Reset rear if queue becomes empty
        if(isEmpty()) {
            front = 0;
            rear = -1;
        }
        
        return true;
    }
    
    // Get the front element
    int Front() {
        if(isEmpty()) {
            return -1;
        }
        return data[front];
    }
    
    // Get the rear element
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        return data[rear];
    }
    
    // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }
    
    // Check if queue is full
    bool isFull() {
        return size == capacity;
    }
};