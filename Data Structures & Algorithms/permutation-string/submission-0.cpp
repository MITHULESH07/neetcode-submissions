class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(),n=s2.size();
        int l=0;
        vector<int>fr1(26,0),fr2(26,0);
        for(char c:s1){
            fr1[c-'a']++;
        }
        for(int r=0;r<n;r++){
            fr2[s2[r]-'a']++;
            if(r-l+1>m){
                fr2[s2[l]-'a']= fr2[s2[l]-'a']-1<0 ? 0 : fr2[s2[l]-'a']-1;
                l++;
                if(r-l+1==m){
                    int i;
                    for(i =0;i<26;i++){
                        if(fr1[i]!=fr2[i]) break;
                    }
                    if(i==26)return true;
            }
            }
            if(r-l+1==m){
                    int i;
                    for(i =0;i<26;i++){
                        if(fr1[i]!=fr2[i]) break;
                    }
                    if(i==26)return true;
            }
        }
        return false;
    }
};
