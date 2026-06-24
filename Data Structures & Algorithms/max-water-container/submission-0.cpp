class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l = 0,r=n-1,cap=0,curr=0;
        while(l<r){
            curr=(r-l)*(min(heights[l],heights[r]));
            cap=max(cap,curr);
            heights[l]<heights[r]?l++:r--;
        }
        return cap;
    }
};
