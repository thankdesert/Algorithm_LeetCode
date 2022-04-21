//from : https://leetcode.com/problems/baseball-game/


class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(int i=0;ops.size()>i;++i){
            if("C"==ops[i]){
                st.pop();
            }
            else if("D"==ops[i]){
                st.push(st.top()*2);
            }
            else if("+"==ops[i]){
                int tmp_l=st.top();
                st.pop();
                int tmp_r=st.top();
                st.pop();
                st.push(tmp_r);
                st.push(tmp_l);
                st.push(tmp_l+tmp_r);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        int answer=0;
        while(!st.empty()){
            answer+=st.top();
            st.pop();
        }
        return answer;
    }
};
