class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long mul=1;
        int count=0;
        for(int n:nums){
            if(n==0)count++;
            else
            mul*=n;
        }
        vector<int>ans(nums.size(),0);
        if(count==0){
        for(int i =0;i<nums.size();i++){
            ans[i]=mul/nums[i];
        }
        }
        else if(count==1){
            for(int i =0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=mul;
                }
            }
        }
        return ans;
    }
};
