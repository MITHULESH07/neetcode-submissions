class Solution {
public:
    bool check(vector<int>& piles, int hrs,int x){
        int hr=0;
        for(int p:piles){
            hr+=ceil(1.0*p/x);
        }
        return hr<=hrs;
    }
    int minEatingSpeed(vector<int>& piles, int hrs) {
        int ans=-1;
        int l=1,h=*max_element(piles.begin(),piles.end());
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(piles,hrs,m)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};
