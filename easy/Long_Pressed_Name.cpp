//from : https://leetcode.com/problems/long-pressed-name/


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i,j;
        for(i=0,j=0;name.size()>i;){
            if(name[i]!=typed[j])
                return false;
            else{
                ++i;++j;
                int cnt_n=0,cnt_t=0;
                while(name.size()>i&&name[i]==name[i-1]){
                    ++i;
                    ++cnt_n;
                }
                while(typed.size()>j&&typed[j]==typed[j-1]){
                    ++j;
                    ++cnt_t;
                }
                if(cnt_n>cnt_t)
                    return false;
            }
        }
        if(name.size()!=i||typed.size()!=j)
            return false;
        else
            return true;
    }
};
