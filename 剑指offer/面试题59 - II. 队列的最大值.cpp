 class MaxQueue {
public:
    MaxQueue() { }
    int max_value() {
    	if(que.empty()) return -1;
    	else return q.front();
    } 
    void push_back(int value) {
    	que.push_back(value);
    	while(!q.empty()&&value>q.back()) q.pop_back();
    	q.push_back(value);
    }   
    int pop_front() {
    	if(que.empty()) return -1;
    	int n=que.front();
    	que.pop_front();
    	if(n==q.front()) q.pop_front();
    	return n;
    }
private:
    deque<int> que;
    deque<int> q;
};
/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
 
 
 
