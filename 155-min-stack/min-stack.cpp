#include <stack>

class MinStack {
public:
    stack<int> main;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(min.empty()|| val<= min.top()){
            min.push(val);
        }
        
    }
    
    void pop() {
        int temp = main.top();
        main.pop();
        if(min.top()== temp){
            min.pop();
        }
        
    }
    
    int top() {
        return main.top();
        
    }
    
    int getMin() {
        return min.top();
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