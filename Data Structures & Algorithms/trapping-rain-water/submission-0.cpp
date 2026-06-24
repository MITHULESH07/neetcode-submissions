class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        int n = height.size();
        int l=0,r=n-1,ans=0;
        int lmax=height[l],rmax=height[r];
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax=max(lmax,height[l]);
                ans+=(lmax-height[l]);
            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                ans+=(rmax-height[r]);
            }
        }
        return ans;
    }
};
