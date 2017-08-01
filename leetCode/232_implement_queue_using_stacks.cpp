class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
    	m_s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
    	int el = peek();
    	m_s2.pop();
    	return el;
    }
    
    /** Get the front element. */
    int peek() {
    	if (m_s2.empty()) {
    		while (!m_s1.empty()) {
    			m_s2.push(m_s1.top());
    			m_s1.pop();
    		}
    	}

    	return m_s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
    	return m_s1.empty() && m_s2.empty();
    }

private:
	stack<int> m_s1;
	stack<int> m_s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
