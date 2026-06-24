class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.size(),n=s.size();
        int l=0,r,len=INT_MAX;
        string ans="";
        unordered_map<char,pair<int,int>>mp;
        for(char c:t){
            mp[c].second++;
        }
        for(r=0;r<n;r++){
            mp[s[r]].first++;
            while(r-l+1>=m){
                bool check=true;
                for(auto b:mp){
                    if(b.second.second!=0 && b.second.first<b.second.second){
                        check=false;
                        break;
                    }
                }
                if(check){
                    if((r-l+1)<len){
                        ans= s.substr(l,(r-l+1));
                        len = r-l+1;
                    }
                    mp[s[l]].first--;
                    if(mp[s[l]].first<0)
                        mp[s[l]].first=0;
                    l++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};
