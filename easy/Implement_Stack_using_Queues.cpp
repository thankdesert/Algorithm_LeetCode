//from : https://leetcode.com/problems/implement-stack-using-queues/


class MyStack {
public:
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    /*
    int pop() {
        queue<int> tmp;
        int key=q.back();
        while(q.size()>1){
            tmp.push(q.front());
            q.pop();
        }
        q.pop();
        while(false==tmp.empty()){
            q.push(tmp.front());
            tmp.pop();
        }
        return key;
    }
    */
    int pop(){
        int len=q.size(),key=q.back();
        for(int i=0;len-1>i;++i){
            int tmp=q.front();
            q.pop();
            q.push(tmp);
        }
        q.pop();
        return key;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty()==true?true:false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
