class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target && matrix[mid][m-1]>=target){
                int l=0,h=m-1;
                while(l<=h){
                    int m =l+(h-l)/2;
                    if(matrix[mid][m]==target)
                        return true;
                    else if(matrix[mid][m]>target)
                        h=m-1;
                    else
                        l=m+1;
                }
                break;
            }
            else  if(matrix[mid][0]>target){
                    high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
