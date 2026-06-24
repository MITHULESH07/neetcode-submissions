class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length(),ans=0;
        unordered_set<char>charSet(s.begin(),s.end());
        for(char ch:charSet){
        int l =0,c=0;
        for(int r=0;r<n;r++){
          if(s[r]==ch)c++;
          while((r-l+1)-c>k){
            if(s[l]==ch)c--;
            l++;
          }  
          ans=max(ans,r-l+1);
        }
        }
        return ans;
    }
};
