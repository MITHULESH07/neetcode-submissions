class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(int n:nums){
            mp[n]++;    
        }
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
