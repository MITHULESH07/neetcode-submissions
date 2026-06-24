class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size(),ans=0;
        vector<int>a(n,0);
        for(int i =n-2;i>=0;i--){
            a[i]=max(a[i+1],prices[i+1]); 
        }
        for(int i =0;i<n-1;i++){
            ans=max(a[i]-prices[i],ans);
        }
        return ans;
    }
};
