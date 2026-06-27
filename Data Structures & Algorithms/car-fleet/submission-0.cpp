class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>ans;
        vector<pair<int,int>>mp;
        for(int i =0;i<position.size();i++){
            mp.push_back({position[i],speed[i]});
        }
        sort(mp.rbegin(),mp.rend());
        for(auto &m:mp){
            ans.push_back((double)(target-m.first)/m.second);
            if(ans.size()>=2 && ans.back()<=ans[ans.size()-2]){
                ans.pop_back();
            }
        }        
        return ans.size();
    }
};
