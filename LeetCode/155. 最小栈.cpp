class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {   }
    void push(int x) {
        buf.push_back(x);
        if (mins.empty() ||x <= mins.back())
             mins.push_back(x);
    }
    void pop() {
        if(buf.back() == mins.back())
            mins.pop_back();
        buf.pop_back();
    }
    int top() {
        return buf.back();
    }
    int getMin() {
        return mins.back();
    }
private:
    vector<int> buf;
    vector<int> mins;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
 
 
