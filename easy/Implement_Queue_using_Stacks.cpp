//from : https://leetcode.com/problems/implement-queue-using-stacks/



class MyQueue {
public:
    stack<int> st;
    stack<int> tmp;
    int top;
    
    MyQueue() {

    }
    
    void push(int x) {
        st.push(x);
        if(1==st.size())
            top=st.top();
    }
    
    int pop() {
        if(st.empty())
            return -1;
        while(1!=st.size()){
            tmp.push(st.top());
            st.pop();
        }
        int k=st.top();
        st.pop();
        if(!tmp.empty())
            top=tmp.top();
        while(!tmp.empty()){
            st.push(tmp.top());
            tmp.pop();
        }
        return k;
    }
    
    int peek() {
        return top;
    }
    
    bool empty() {
        return 0<st.size()?false:true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
