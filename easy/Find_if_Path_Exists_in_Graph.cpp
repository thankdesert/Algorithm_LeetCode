//from : https://leetcode.com/problems/find-if-path-exists-in-graph/


class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        /*memory limit exceeded(Adjacency matrix)
        vector<int> visit(n,0);
        vector<vector<int>> matrix(n,vector<int>(n,0));
        for(int i=0;edges.size()>i;++i){
            matrix[edges[i][0]][edges[i][1]]=1;
            matrix[edges[i][1]][edges[i][0]]=1;
        }
        queue<int> q;
        q.push(source);
        while(false==q.empty()){
            int cur=q.front();
            if(destination==cur)
                return true;
            visit[cur]=1;
            q.pop();
            for(int i=0;n>i;++i){
                if(1==matrix[cur][i]&&0==visit[i])
                    q.push(i);
            }
        }
        return false;
        */
        
        //Adjacency List
        vector<int> visit(n,0);
        vector<vector<int>> matrix(n);
        for(int i=0;edges.size()>i;++i){
            matrix[edges[i][0]].push_back(edges[i][1]);
            matrix[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        q.push(source);
        while(false==q.empty()){
            int cur=q.front();
            if(destination==cur)
                return true;
            visit[cur]=1;
            q.pop();
            for(int i=0;matrix[cur].size()>i;++i){
                if(0==visit[matrix[cur][i]])
                    q.push(matrix[cur][i]);
            }
        }
        return false;
    }
};
