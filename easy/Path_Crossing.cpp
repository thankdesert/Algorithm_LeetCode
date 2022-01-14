//from : https://leetcode.com/problems/path-crossing/


class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> matrix;
        pair<int, int> cur={0,0};
        matrix.insert(cur);
        for(char item:path) {
            switch(item){
                case 'N':
                    cur.first--;
                    break;
                case 'S':
                    cur.first++;
                    break;
                case 'E':
                    cur.second++;
                    break;
                case 'W':
                    cur.second--;
                    break;
            }
            
            if(matrix.count(cur))
                return true;
            matrix.insert(cur);
        }
        return false;
    }
};
