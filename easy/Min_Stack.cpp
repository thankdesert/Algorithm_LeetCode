//from : https://leetcode.com/problems/min-stack/



#include <climits>

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v;
    multiset<int> st;
    int min, tp;
    MinStack() {
        min = INT_MAX;
        tp = -1;
    }
    
    void push(int val) {
        if(val < min)
            min = val;
        v.push_back(val);
        tp += 1;
    }
    
    void pop() {
        if(tp == -1)
            return;
        if(v[tp] == min) {
            min = INT_MAX;
            for(int i = 0; i<v.size() - 1; i++) {
                if(v[i] < min)
                    min = v[i];
            }
        }
        v.pop_back();
        tp -= 1;
        
    }
    
    int top() {
        return v[tp];
    }
    
    int getMin() {
        return min;
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
