//from : https://leetcode.com/problems/slowest-key/


class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max=releaseTimes[0];
        char max_char=keysPressed[0];
        for(int i=1;keysPressed.size()>i;++i){
            if(max<releaseTimes[i]-releaseTimes[i-1]){
                max=releaseTimes[i]-releaseTimes[i-1];
                max_char=keysPressed[i];
            }
            else if(max==releaseTimes[i]-releaseTimes[i-1]){
                max_char<keysPressed[i]?max_char=keysPressed[i]:max_char;
            }
        }
        return max_char;
    }
};
