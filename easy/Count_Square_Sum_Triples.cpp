//from : https://leetcode.com/problems/count-square-sum-triples/


class Solution {
public:
    int countTriples(int n) {
        int answer=0;
        for (int i=1;n>=i;++i) {
            for (int j=i+1;n>=j;++j) {
                const double v1=sqrt(i*i+j*j);
                const double v2=floor(v1); 
                if (v1==v2&&n>=static_cast<int>(v1))
                    answer+=2;
            }
        }
        return answer;
    }
};
