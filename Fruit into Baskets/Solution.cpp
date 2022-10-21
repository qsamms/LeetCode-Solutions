class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> m;
      
        int i = 0;
        int start = 0;
        int ans = 0;
        
        for(;i<fruits.size();i++){
            m[fruits[i]]++;
            ans++;
            
            if(m.size() > 2){
                m[fruits[start]]--;
                if(m[fruits[start]] == 0) m.erase(fruits[start]);
                start++;
                ans--;
            } 
        }
        
        return ans;
    }
};