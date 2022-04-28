//from : https://leetcode.com/problems/available-captures-for-rook/



class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        vector<vector<char>> v(board.size()+2, vector<char>(board[0].size()+2, '/'));
        
        int R_x=0,R_y=0;
        for(int i=1;v.size()-1>i;++i){
            for(int j=1;v[i].size()-1>j;++j){
                v[i][j]=board[i-1][j-1];
                if('R'==board[i-1][j-1]){
                    R_x=j;
                    R_y=i;
                }
            }
        }
        
        int move_x[4]={0,0,-1,1};
        int move_y[4]={-1,1,0,0};
        
        int answer=0;
        for(int i=0;4>i;++i){
            int tmp_x=R_x,tmp_y=R_y;
            while(true){
                if('B'==v[tmp_y][tmp_x]||'/'==v[tmp_y][tmp_x])
                    break;
                if('p'==v[tmp_y][tmp_x]){
                    ++answer;
                    break;
                }
                tmp_x+=move_x[i];
                tmp_y+=move_y[i];
            }
        }
        return answer;
    }
};
