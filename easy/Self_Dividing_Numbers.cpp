//from : https://leetcode.com/problems/self-dividing-numbers/


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for(int i=left;right>=i;++i){
            int tmp=i;
            while(0<tmp){
                int k=tmp%10;
                if(0==k)
                    break;
                if(0!=i%k)
                    break;
                tmp/=10;
            }
            if(0==tmp)
                answer.push_back(i);
        }
        return answer;
    }
};
