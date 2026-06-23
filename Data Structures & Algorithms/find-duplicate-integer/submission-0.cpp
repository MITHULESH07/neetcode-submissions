class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
            if(mp[a]>1)return a;
        }return 0;
    }
};
