class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {
    	p.push(x);
    	m_top = x;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
    	while (p.size() > 1) {
    		m_top = p.front();
    		p.pop();
    		q.push(m_top);
    	}

    	int el = p.front();
    	p.pop();

    	queue<int> temp = p;
    	p = q;
    	q = temp;

    	return el;
    }
    
    /** Get the top element. */
    int top() {
    	return m_top;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
    	return p.empty() && q.empty();
    }

private:
	int m_top;
	queue<int> p;	// push to p
	queue<int> q;	// pop from q
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
