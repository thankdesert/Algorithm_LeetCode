//from : https://leetcode.com/problems/container-with-most-water/


#define MIN(a, b) (((a) < (b)) ? (a) : (b))

static const auto fastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=MIN(height[0],height[height.size()-1])*(height.size()-1);
        for(int i=0,j=height.size()-1;i<j;){
            int tmp=MIN(height[i],height[j])*(j-i);
            if(tmp>max)
                max=tmp;
            
            if(height[i]<height[j])
                ++i;
            else
                --j;
        }
        return max;
    }
};
