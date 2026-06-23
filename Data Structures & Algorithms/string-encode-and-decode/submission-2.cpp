class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string t:strs){
            string z = to_string(t.size());
            s+=z+"#"+t;
        }
            cout<<s<<endl;
        return s;
    }

    vector<string> decode(string s) {
        int len,n=s.length(),i=0;
        vector<string>ans;
        for(int j =0;j<n;j++){
            if(s[j]=='#' && i<n && j>i){
                len = stoi(s.substr(i,j-i));
                i=j+len+1;
                ans.push_back(s.substr(j+1,len));
            }
        }
    return ans;
    }
};
