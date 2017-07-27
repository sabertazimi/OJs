class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
    	if (minstk.empty() || x <= getMin()) {
    		minstk.push(x);
    	}

    	stk.push(x);
    }
    
    void pop() {
    	if (stk.top() == getMin()) {
    		minstk.pop();
    	}

    	stk.pop();
    }
    
    int top() {
    	return stk.top();
    }
    
    int getMin() {
    	return minstk.top();
    }

private:
	stack<int> stk;
	stack<int> minstk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
