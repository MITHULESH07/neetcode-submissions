class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l=0;
        int ans=0;
        map<char,int>mp;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                if(mp[s[l]]<0)
                    mp[s[l]]=0;
                l++;
            }
            ans=max(r-l+1,ans);
        }
        return ans;
    }
};
