class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        priority_queue<int>pq;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int r = 0;r < n;r++){
            mp[nums[r]]++;
            pq.push(nums[r]);
            if(r-l+1>k){
                mp[nums[l]]--;
                if(mp[nums[l]]<0)mp[nums[l]]=0;
                l++;
            }
            if(r-l+1 == k){
                while(mp[pq.top()]==0){
                    pq.pop();
                }
                ans.push_back(pq.top());
            }

        }
        return ans;
    }
};
