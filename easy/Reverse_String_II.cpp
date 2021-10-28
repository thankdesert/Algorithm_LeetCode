//from : https://leetcode.com/problems/reverse-string-ii/



class Solution {
public:
    string reverseStr(string s, int k) {
        stack<int> st;
        int i=0;
        while(s.size()>i){
            st.push(i);
            i+=2*k;
        }    
        while(!st.empty()){
            int l=st.top();
            int r=l+k-1;
            if(r>=s.size())
                r=s.size()-1;
            while(l<r){
                char tmp=s[l];
                s[l]=s[r];
                s[r]=tmp;
                ++l,--r;
            }
            st.pop();
        }
        return s;
    }
};
