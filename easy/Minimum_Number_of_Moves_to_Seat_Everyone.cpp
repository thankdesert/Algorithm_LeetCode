//from : https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/


class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        
        int cnt=0;
        for(int i=0;seats.size()>i;++i){
            if(seats[i]==students[i])
                continue;
            else
                cnt+=abs(students[i]-seats[i]);
        }
        return cnt;
    }
};
