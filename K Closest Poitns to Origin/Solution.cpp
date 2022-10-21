#include <vector>

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> max;
        vector<vector<int>> r;
        
        for(auto const & p : points){
            max.push({getDist(p[0],p[1]),p[0],p[1]});
            
            if(max.size() > k){
                max.pop();
            }
        }
        
        int t = max.size();
        for(int i = 0;i<t;i++){
            vector<int> temp;
            temp = {max.top()[1],max.top()[2]};
            r.push_back(temp);
            max.pop();
        }
        
        return r;
    }
    
    int getDist(int x, int y){
        return (x*x) + (y*y);
    }
};